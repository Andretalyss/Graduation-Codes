from flask import Blueprint, jsonify, request
from config.jdbc.jdbc import get_user_by_id

# Criando o Blueprint para a rota de GET
get_user_route = Blueprint('getUser_route', __name__)

@get_user_route.route('/<int:user_id>', methods=['GET'])
def get_user(user_id):
    try:
        # Chamando a função que irá consultar o banco de dados
        user = get_user_by_id(user_id)
        
        if user:
            # Retorna os dados do usuário em formato JSON
            return jsonify({
                'id': user[0],
                'nome': user[1],
                'sobrenome': user[2],
                'email': user[3],
                'nascimento': user[4],
                'telefone': user[5]
            }), 200
        else:
            return jsonify({'error': 'Usuario nao encontrado.'}), 404

    except Exception as e:
        return jsonify({'error': f'Erro ao buscar usuario: {str(e)}'}), 500

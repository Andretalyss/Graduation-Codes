import psycopg2
from psycopg2 import sql
import bcrypt, datetime, jwt

def init_db_instances(db_config):
    jdbc_connection = psycopg2.connect(**db_config)
    cursor = jdbc_connection.cursor()

    try:
        create_users_table_query = sql.SQL("""CREATE TABLE IF NOT EXISTS users (
            id serial PRIMARY KEY,
            nome varchar(20) not null,
            sobrenome varchar(20) not null,
            email varchar(30) unique not null,
            password varchar(100) not null,
            nascimento date,
            telefone varchar(12)
        );""")

        cursor.execute(create_users_table_query)
        jdbc_connection.commit()
    except Exception as e:
        print(f"Erro ao criar a tabela: {e}")
    finally:
        jdbc_connection.close()

def sign_up_new_user(db_config, nome, sobrenome, email, password, nascimento, telefone=None):
    jdbc_connection = psycopg2.connect(**db_config)
    cursor = jdbc_connection.cursor()

    try:
        register_user_query = sql.SQL("INSERT INTO users (nome, sobrenome, email, password, nascimento, telefone) VALUES ({}, {}, {}, {}, {}, {})").format(
            sql.Literal(nome),
            sql.Literal(sobrenome),
            sql.Literal(email),
            sql.Literal(password.decode('utf-8')),
            sql.Literal(nascimento),
            sql.Literal(telefone)
        )

        cursor.execute(register_user_query)
        jdbc_connection.commit()
    except Exception as e:
        jdbc_connection.rollback()
        print(f"{e}")
    finally:
        jdbc_connection.close()

def sign_in_user(db_config, secret, email, password):
    jdbc_connection = psycopg2.connect(**db_config)
    cursor = jdbc_connection.cursor()

    try:
        sign_in_query = sql.SQL("SELECT id, password FROM users WHERE email = {}").format(
            sql.Literal(email)
        )

        cursor.execute(sign_in_query)
        row = cursor.fetchone()

        if row:
            user_password = row[1].encode('utf-8')
            if bcrypt.checkpw(password.encode('utf-8'), user_password):
                payload = {
                    'user_id': row[0],
                    'exp': datetime.datetime.utcnow() + datetime.timedelta(hours=1)
                }
                
                token = jwt.encode(payload, secret, algorithm='HS512')
                return token, 0
            else:
                return None, 1

        else:
            jdbc_connection.close()
            return None, 1
    except Exception as e:
        return e, 2
    finally:
        jdbc_connection.close()

def get_user_by_id(user_id):
    try:
        # Recuperando as variáveis de ambiente
        db_config = {
            'database': 'postgres',  # Substitua conforme necessário
            'user': 'postgres',
            'password': 'api',
            'host': 'db',  # Nome do serviço do banco no Docker Compose
            'port': '5432'
        }

        # Conectando ao banco de dados
        connection = psycopg2.connect(**db_config)
        cursor = connection.cursor()

        # Consulta SQL para buscar os dados do usuário pelo ID
        query = sql.SQL("SELECT id, nome, sobrenome, email, nascimento, telefone FROM users WHERE id = %s")
        cursor.execute(query, [user_id])

        # Recuperando o resultado
        user = cursor.fetchone()

        cursor.close()
        connection.close()

        return user

    except Exception as e:
        print(f"Erro ao consultar o banco de dados: {e}")
        return None

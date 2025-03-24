using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.UI;

public class mensagem : MonoBehaviour{
	public Button Sobre;
	public Button Fechar;
	public Text Information;
	public Button btf;
	public Image image;
	public Image img;
	void Start()
    {
		btf = Fechar.GetComponent<Button>();
		btf.gameObject.SetActive(false);

		img = image.GetComponent<Image>();
		img.enabled = false;
	}

    void Update() {
		Button btn = Sobre.GetComponent<Button>();
		btn.onClick.AddListener(Message);
	}


	void Message() { 
		btf.gameObject.SetActive(true);
		img.enabled = true;
		Information.enabled = true;
		Information.text = " Você observa o Planeta Terra.\n\n-Terceiro planeta mais próximo do sol.\n-Único corpo celeste que é encontrado vida.\n-O mais denso e quinto maior planeta do sistema solar.\n" +
			"-A Lua é o único satélite natural conhecido da Terra, tendo começado a orbitá-la há 4,53 bilhões de anos.\n";
		btf.onClick.AddListener(Fechando);
	}

	void Fechando()
    {
		Information.enabled = false;
		btf.gameObject.SetActive(false);
		img.enabled = false;
    }

	
	

	
}
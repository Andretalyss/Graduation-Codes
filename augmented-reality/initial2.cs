using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class initial2 : MonoBehaviour
{
	public Button marte;
	public Button planets;
	public Button voltar;
	public Button btf;
	public Button btr;
	public Button btv;

    // Start is called before the first frame update
    void Start()
    {	
	btf = marte.GetComponent<Button>();
        btf.gameObject.SetActive(false);
    }

    void Update(){
    	btr = planets.GetComponent<Button>();
	btr.onClick.AddListener(abrirMenu);
    }

    void abrirMenu(){
	btf.gameObject.SetActive(true);
	btv = voltar.GetComponent<Button>();
	btv.onClick.AddListener(retornar);
    }

    void retornar(){
	btf.gameObject.SetActive(false);
    }

}

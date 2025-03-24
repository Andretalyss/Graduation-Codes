using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveModels : MonoBehaviour
{
	public Button cont;
	public Button oceanos;
	public Button sobre;

	public GameObject terra;
	public GameObject mars;
	public GameObject lua;
	public GameObject venus;
	public GameObject mercurio;
	public GameObject jup;
	
	public Button ven;
	public Button marte;
	public Button earth;
	public Button jupiter;
	public Button merc;
	public Button btf;
	public Button btm;
	public Button bta;
	public Button btj;
	public Button btmc;

    void Start()
    {
 
		venus.gameObject.SetActive(false);
		mercurio.gameObject.SetActive(false);
		jup.gameObject.SetActive(false);

	}

    void Update()
    {
        btf = marte.GetComponent<Button>();
		btf.onClick.AddListener(abrirMarte);

		btm = ven.GetComponent<Button>();
		btm.onClick.AddListener(abrirVenus);

		bta = earth.GetComponent<Button>();
		bta.onClick.AddListener(abrirEarth);

		btj = jupiter.GetComponent<Button>();
		btj.onClick.AddListener(abrirJup);

		btmc = merc.GetComponent<Button>();
		btmc.onClick.AddListener(abrirMerc);
	}

	void abrirMarte(){
		mars.gameObject.SetActive(true);
		cont.gameObject.SetActive(false);
		sobre.gameObject.SetActive(false);
		oceanos.gameObject.SetActive(false);
		terra.gameObject.SetActive(false);
		mercurio.gameObject.SetActive(false);
		jup.gameObject.SetActive(false);
		venus.gameObject.SetActive(false);
		lua.gameObject.SetActive(false);
		
	}

	void abrirVenus(){
		venus.gameObject.SetActive(true);
		cont.gameObject.SetActive(false);
		sobre.gameObject.SetActive(false);
		oceanos.gameObject.SetActive(false);
		terra.gameObject.SetActive(false);
		mars.gameObject.SetActive(false);
		lua.gameObject.SetActive(false);
		mercurio.gameObject.SetActive(false);
		jup.gameObject.SetActive(false);
	}

	void abrirEarth()
    {
		terra.gameObject.SetActive(true);
		cont.gameObject.SetActive(true);
		sobre.gameObject.SetActive(true);
		oceanos.gameObject.SetActive(true);
		mars.gameObject.SetActive(false);
		lua.gameObject.SetActive(true);
		venus.gameObject.SetActive(false);
		jup.gameObject.SetActive(false);
		mercurio.gameObject.SetActive(false);
	}

	void abrirJup()
    {
		jup.gameObject.SetActive(true);
		venus.gameObject.SetActive(false);
		cont.gameObject.SetActive(false);
		sobre.gameObject.SetActive(false);
		oceanos.gameObject.SetActive(false);
		terra.gameObject.SetActive(false);
		mars.gameObject.SetActive(false);
		lua.gameObject.SetActive(false);
		mercurio.gameObject.SetActive(false);
		
	}

	void abrirMerc()
    {
		mercurio.gameObject.SetActive(true);
		jup.gameObject.SetActive(false);
		venus.gameObject.SetActive(false);
		cont.gameObject.SetActive(false);
		sobre.gameObject.SetActive(false);
		oceanos.gameObject.SetActive(false);
		terra.gameObject.SetActive(false);
		mars.gameObject.SetActive(false);
		lua.gameObject.SetActive(false);
		

	}
}

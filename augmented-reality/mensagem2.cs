using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class mensagem2 : MonoBehaviour
{
    public Button Oceanos;
    public Button Close;
    public Text Information;
    public Button btf;
    public Image Fundo;
    public Image img;

    void Start()
    {
        btf = Close.GetComponent<Button>();
        btf.gameObject.SetActive(false);

        img = Fundo.GetComponent<Image>();
        img.enabled = false;

    }

    void Update()
    {
        Button btn = Oceanos.GetComponent<Button>();
        btn.onClick.AddListener(Message);

    }

    void Message()
    {
        btf.gameObject.SetActive(true);
        img.enabled = true;
        Information.enabled = true;
        Information.text = "A terra possui 5 oceanos espalhados pelo globo, são eles:\n\n1 - Oceano Pacífico.\n2 - Oceano Atlântico.\n3 - Oceano Índico.\n4 - Oceano Glacial Antártico.\n5 - Oceano Glacial Ártico.\n";
        btf.onClick.AddListener(Fechando);
    }

    void Fechando()
    {
        Information.enabled = false;
        btf.gameObject.SetActive(false);
        img.enabled = false;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class mensagem3 : MonoBehaviour
{
    public Button Continentes;
    public Button Close;
    public Text Information;
    public Button btf;
    public Image Fundo;
    public Image img;
    // Start is called before the first frame update
    void Start()
    {
        btf = Close.GetComponent<Button>();
        btf.gameObject.SetActive(false);

        img = Fundo.GetComponent<Image>();
        img.enabled = false;

    }

    void Update()
    {
        Button btn = Continentes.GetComponent<Button>();
        btn.onClick.AddListener(Message);

    }

    void Message()
    {
        btf.gameObject.SetActive(true);
        img.enabled = true;
        Information.enabled = true;
        Information.text = "Os continentes existentes na terra são:\n\n África: limita com a Ásia pelo canal de Suez e está separada da Europa pelo estreito de Gibraltar.\n" +
            "Europa: separada da África pelo Mediterrâneo, se estende desde os montes Urais até a Península Ibérica.\n" + "América: está separada da Ásia pelo estreito de Bering, no noroeste, e está dividida em dois ou três subcontinentes:\n" +
            "      América do Norte.\n" +
            "      América do Sul.\n" +
            "      América Central.\n" +
            "Ásia: separada da África pelo canal de Suez, se estende do leste e noroeste até o estreito de Bering e o oceano Índico.\n" +
            "Oceania: localizada ao sudeste da Ásia, entre os oceanos Índico e Pacífico.\n" +
            "Antártida.";
        btf.onClick.AddListener(Fechando);
    }

    void Fechando()
    {
        Information.enabled = false;
        btf.gameObject.SetActive(false);
        img.enabled = false;
    }
}

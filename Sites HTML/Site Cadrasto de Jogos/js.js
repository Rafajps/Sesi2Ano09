let jogos = [];
let primeiraVez = true;

function botao() {

    let nome = document.getElementById("nome").value;
    let ano = document.getElementById("ano").value;

    let plataforma = document.getElementsByName("plataforma")[0];
    let genero = document.getElementsByName("genero")[0];

    if (
        nome == "" ||
        ano == "" ||
        plataforma.value == "sel" ||
        genero.value == "sel"
    ) {
        alert("Preencha todos os campos!");
        return;
    }

    let jogo = {
        nome: nome,
        ano: ano,
        plataforma: plataforma.options[plataforma.selectedIndex].text,
        genero: genero.options[genero.selectedIndex].text
    };

    jogos.push(jogo);

    let tabela = document.getElementById("tabelaJogos");

    tabela.innerHTML += `
        <tr>
            <td>${jogo.nome}</td>
            <td>${jogo.ano}</td>
            <td>${jogo.plataforma}</td>
            <td>${jogo.genero}</td>
        </tr>
    `;

    if (primeiraVez) {
        document.querySelector(".tab").style.display = "flex";
        primeiraVez = false;
    }

    document.getElementById("nome").value = "";
    document.getElementById("ano").value = "";
    plataforma.selectedIndex = 0;
    genero.selectedIndex = 0;
}
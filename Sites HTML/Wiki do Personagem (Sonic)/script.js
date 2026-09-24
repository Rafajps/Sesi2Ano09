document.getElementById("formulario").addEventListener("submit", function(event) {
    event.preventDefault();

    let nome = document.getElementById("nome").value.trim();
    let comentario = document.getElementById("comentario").value.trim();

    if (nome === "" || comentario === "") {
        document.getElementById("mensagem").innerText =
        "Falta alguma informação!";
    } else {
        document.getElementById("mensagem").innerText =
        "Obrigado " + nome + " pelo seu comentário!";
    }
});
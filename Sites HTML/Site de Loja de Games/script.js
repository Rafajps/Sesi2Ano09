// Cria uma função chamada comprarProduto
// Essa função recebe o nome do produto como informação
function comprarProduto(nome) {

    // Mostra uma mensagem na tela informando qual produto foi adicionado ao carrinho
    alert("Garantindo sua compra em segundos: " + nome);
  
  }


const botaoEntrar = document.getElementById("btnEntrar");

// Adiciona um evento de clique no botão Entrar
botaoEntrar.addEventListener("click", function () {

  let nome = prompt("Digite seu nome:");
  let email = prompt("Digite seu Email:");

  if (nome && nome.trim() !== "" && email && email.trim() !== "") {
    
    alert(nome + " Você sera avisado quando o produto estiver em estoque! ;)");

  } else {

    alert("Erro!");

  }

});
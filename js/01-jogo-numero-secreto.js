alert("Oiee! Bem vindo ao jogo do número secreto.");
alert("Vamos começar!");
let secretNumber = 9;
let chute = prompt('Escolha um número entre 1 e 50.');

// se o chute for igual ao número secreto
if (chute == secretNumber) {
    console.log(secretNumber);
    alert(`Você acertou! O número secreto era ${secretNumber}.`);
} else {
    console.log(secretNumber);
    alert('Poxa, você errou. :(');
    alert(`O número secreto era ${secretNumber}, mas você escolheu ${chute}.`);
}

#include <stdio.h>

int main() {
    // 1. Entrada de Dados
    char nome[30];
    int idade;
    float nota;

    printf("Digite seu nome completo: ");
    // Leitura segura para nome com espaços, limitando a 29 caracteres + \0
    scanf("%29[^\n]", nome); 

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua nota final: ");
    scanf("%f", &nota);

    // 2. Processamento
    // Incremento para a idade do próximo ano
    idade++; 
    
    // Cálculo da metade da nota
    float metadeNota = nota / 2.0;

    // 3. Saída
    printf("\n--- Dados Processados ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade no proximo ano: %d\n", idade);
    // Formatação com 2 casas decimais[cite: 1]
    printf("Nota original: %.2f\n", nota);
    printf("Metade da nota: %.2f\n", metadeNota);

    return 0;

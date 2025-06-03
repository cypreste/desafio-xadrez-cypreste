// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

#include <stdio.h>

int main() {
    // Variáveis que definem o número de casas a serem movidas
    int movimento_torre = 5;
    int movimento_bispo = 5;
    int movimento_rainha = 8;

    int i; // Variável de controle de repetição

    // -------------------------------
    // Movimento da TORRE - Estrutura FOR
    // -------------------------------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimento_torre; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Linha em branco para separar as saídas

    // -------------------------------
    // Movimento do BISPO - Estrutura WHILE
    // -------------------------------
    printf("Movimento do Bispo:\n");
    i = 1; // Reinicia a variável de controle
    while (i <= movimento_bispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // -------------------------------
    // Movimento da RAINHA - Estrutura DO-WHILE
    // -------------------------------
    printf("Movimento da Rainha:\n");
    i = 1; // Reinicia a variável de controle
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimento_rainha);

    printf("\n");

    return 0; // Finaliza o programa
}


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  

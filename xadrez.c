#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Nível Novato - Movimentação da torre: 5 casas para a direita usando FOR
    printf("Movimento da torre: \n");
    int casas_torre = 5;

    for(int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação do Bispo: 5 casas na diagonal usando WHILE
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int contador_bispo = 0;

    while(contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha: 8 casas para a esquerda DO-WHILE
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int contador_rainha = 0;

    do {
        printf("Esquerda\n");
        contador_rainha++;
    }   while(contador_rainha < casas_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

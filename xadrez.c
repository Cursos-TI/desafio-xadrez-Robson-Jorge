#include <stdio.h>

// Desafio de Xadrez - MateCheck

void mover_bispo(int passos) {
    if (passos < 5) {
        printf("Cima, Direita\n");
        mover_bispo(passos + 1);
    }
}

void mover_torre(int passos) {
    if (passos < 5) {
        printf("Direita\n");
        mover_torre(passos + 1);
    }
}

int main() {
    // Implementação de Movimentação do Bispo - Utilizando funções recursivas
    printf("\nMovimentacao do Bispo:\n");
    int passos_bispo = 0;
    mover_bispo(passos_bispo);

    // Implementação de Movimentação da Torre - Utilizando funções recursivas
    printf("\nMovimentacao da Torre:\n");
    int passos_torre = 0;
    mover_torre(passos_torre);

    // Implementação de Movimentação da Rainha - Utilizando loops
    printf("\nMovimentacao da Rainha:\n");
    int passos_rainha = 8;
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < passos_rainha);

    // Implementação de Movimentação do Cavalo em L - Utilizando loops aninhados
    printf("\nMovimentacao do Cavalo:\n");
    int movimentacao_cavalo = 1;
    while (movimentacao_cavalo < 2) {
        for (int i = 0; i < 2; i++) {
            printf("cima\n");
        }
        printf("Esquerda\n");
        movimentacao_cavalo++;
    }
    
    // Implementação de movimentação do Cavalo em L - Utilizando loops com variáveis múltiplas e condições avançadas.
    printf("\nMovimentacao do Cavalo:\n");
    for (int i = 0, j = 0; i < 2 && j < 2; i++, j++) {
        printf("Cima\n");
        if(j < 1) continue;
        printf("Esquerda\n");
    }

    return 0;
}

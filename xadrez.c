#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva que controla o movimento da Torre
void moverTorre(int movimentos){
    if (movimentos > 0){
        printf("Direita --->\n");
        moverTorre(movimentos - 1); // Chamada recursiva para a próxima casa
    }
}

// Função recursiva que controla o movimento da Rainha
void moverRainha(int movimentos){
    if (movimentos > 0){
        printf("<--- Esquerda\n");
        moverRainha(movimentos - 1); // Chamada recursiva para a próxima casa
    }
}

// Função recursiva que controla o movimento do Bispo
void moverBispo(int movimentosRestantes) {
    if (movimentosRestantes != 0) {
            // Loop para o movimento vertical
            for (int i = 0; i < 1; i++) {
                printf("Cima ^\n");
                // Loop aninhado para o movimento horizontal
                for (int i = 0; i < movimentosRestantes; i++) {
                    printf("Direita  --->\n");
                }
                printf("\n");
            }

    // Chamada recursiva para a próxima casa
    moverBispo(movimentosRestantes - 1);
    }
}

//Função usando um for com variáveis múltiplas e condições avançadas, utilizada para simular a movimentação do Cavalo em L
void moverCavalo(int movimento1, int movimento2){
    for (int i = 0, j = 0; (i < movimento1 || j < movimento2); i++, j++) {
        if (i < 2) {  // Move duas casas para cima
            printf("Cima ^\n"); 
        }
        if (j == 1) {  // Move uma casa para a direita
            printf("Direita --->\n"); 
        }
    }
}

int main() {
    // Declaração de variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movimentosBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    const int movimentoCavaloCima = 2;
    const int movimentoCavaloDireita = 1;
    
    // Implementação de Movimentação do Bispo
    printf("\nMovendo o Bispo\n");
    moverBispo(movimentosBispo);
    // Implementação de Movimentação da Torre
    printf("\nMovendo Torre:\n");
    moverTorre(movimentoTorre);
    // Implementação de Movimentação da Rainha
    printf("\nMovendo Rinha\n");
    moverRainha(movimentoRainha);
    // Implementação de Movimentação do Cavalo
    printf("\nMovendo o Cavalo:\n");
    moverCavalo(movimentoCavaloCima, movimentoCavaloDireita);
    
    return 0;
}

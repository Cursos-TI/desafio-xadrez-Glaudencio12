#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função com a estrutura de repetição For utilizada para simular a movimentação da Torre para a direita.
void moverTorre(int movimentos){
    printf("\nMovendo Torre:\n");
    for (int i = 1; i <= movimentos; i++){
        printf("Direita --->  \n");
    }
}

// Função com a estrutura de repetição Do-While utilizada para simular a movimentação da Rainha para a esquerda.
void moverRainha(int movimentos){
    printf("\nMovendo Rainha:\n");
    do{
        printf("<--- Esquerda\n");
        movimentos--;
    } while (movimentos >= 1);
}

// Função com a estrutura de repetição While utilizada para simular a movimentação do Bispo para a diagonal.
void moverBispo(int movimentos){
    printf("\nMovendo o Bispo:\n");
    while (movimentos >= 1){
        printf("Cima ^, Direita --->\n");
        movimentos--;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração de variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movimentosBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    
    // Implementação de Movimentação do Bispo
    moverBispo(movimentosBispo);
    // Implementação de Movimentação da Torre
    moverTorre(movimentoTorre);
    // Implementação de Movimentação da Rainha
    moverRainha(movimentoRainha);

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

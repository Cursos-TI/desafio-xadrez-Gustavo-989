#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) {
        return; // Caso base: quando não há mais movimentos
    }
    printf("Direita\n"); // A Torre move para a direita
    moverTorre(movimentos - 1); // Chama a função recursivamente
}

// Função recursiva para o movimento do Bispo (com loops aninhados)
void moverBispo(int movimentosVertical, int movimentosHorizontal) {
    if (movimentosVertical == 0) {
        return; // Caso base: quando não há mais movimento vertical
    }
    for (int i = 0; i < movimentosHorizontal; i++) {
        printf("Direita\n"); // O Bispo move horizontalmente para a direita
    }
    printf("Cima\n"); // O Bispo move verticalmente para cima
    moverBispo(movimentosVertical - 1, movimentosHorizontal); // Chama a função recursivamente
}

// Função recursiva para o movimento da Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) {
        return; // Caso base: quando não há mais movimentos
    }
    printf("Esquerda\n"); // A Rainha move para a esquerda
    moverRainha(movimentos - 1); // Chama a função recursivamente
}

// Função para o movimento do Cavalo utilizando loops complexos
void moverCavalo() {
    // Move duas casas para cima
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    // Move uma casa para a direita
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    // Movimentação da Torre: 5 casas para a direita (utilizando recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    // Separação visual
    printf("\n");

    // Movimentação do Bispo: 5 casas na diagonal (utilizando recursividade e loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1); // 5 casas na diagonal (vertical e horizontal)

    // Separação visual
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda (utilizando recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    // Separação visual
    printf("\n");

    // Movimentação do Cavalo: 2 casas para cima e 1 casa para a direita (utilizando loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}

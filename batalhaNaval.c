#include <stdio.h>
#define L 10
#define C 10
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[L][C] = {0};
    
    int navio1[3][2] = {{1, 1}, {2, 1}, {3, 1},}; //Navio 1 posicionado Verticalmente.
    int navio2[3][2] = {{4, 2}, {4, 3}, {4, 4},}; //Navio 2 posicionado Horizontalmente.
    int navio3[3][2] = {{6, 7}, {7, 8}, {8, 9},}; //Navio 3 posicionado Diagonal.
    int navio4[3][2] = {{10, 2}, {9, 3}, {8, 4},}; //Navio 4 posicionado Diagonal.
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
        // Posiciona os navios no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[navio1[i][0] - 1][navio1[i][1] - 1] = 3;
            tabuleiro[navio2[i][0] - 1][navio2[i][1] - 1] = 3;
            tabuleiro[navio3[i][0] - 1][navio3[i][1] - 1] = 3;
            tabuleiro[navio4[i][0] - 1][navio4[i][1] - 1] = 3;
        }
    // Exibe as coordenadas dos navio    
    printf("Navio 1 nas coordenadas:\n");
    for (int i = 0; i < 3; i++) {
        printf("(i%d,j%d)\n", navio1[i][0], navio1[i][1]);
    }

    printf("Navio 2 nas coordenadas:\n");
    for (int i = 0; i < 3; i++) {
        printf("(i%d,j%d)\n", navio2[i][0], navio2[i][1]);
    }
    
    printf("Navio 3 nas coordenadas:\n");
    for (int i = 0; i < 3; i++) {
        printf("(i%d,j%d)\n", navio3[i][0], navio3[i][1]);
    }

    printf("Navio 4 nas coordenadas:\n");
    for (int i = 0; i < 3; i++) {
        printf("(i%d,j%d)\n", navio4[i][0], navio4[i][1]);
    }
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.

    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("Tabuleiro Completo:\n");
    for (int i = 0; i < L; i++)    {
        for (int j = 0; j < C; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");        
    }
    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

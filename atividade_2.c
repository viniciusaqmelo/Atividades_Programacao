#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void soma_matrizes(int matriz_A[LINHAS][COLUNAS], int matriz_B[LINHAS][COLUNAS], int linhas, int colunas);

int main(){
    int linhas, colunas;
    int matriz_A[LINHAS][COLUNAS];
    int matriz_B[LINHAS][COLUNAS];
    int i, j;

    printf("Digite a quantidade de linhas e colunas das duas matrizes:\n");
    scanf("%d %d", &linhas, &colunas);

    printf("Digite os elementos da primeira matriz:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz_A[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz_B[i][j]);
        }
    }

    soma_matrizes(matriz_A, matriz_B, linhas, colunas);

    return 0;
}

void soma_matrizes(int matriz_A[LINHAS][COLUNAS], int matriz_B[LINHAS][COLUNAS], int linhas, int colunas){
    int soma[LINHAS][COLUNAS];
    int i,j;

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++)
            soma[i][j] = matriz_A[i][j] + matriz_B[i][j];
    }

    printf("Matriz soma:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
}

//Declare duas matrizes 3×3 de inteiros, preencha-as e calcule a matriz soma, imprimindo o resultado formatado.
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

int ** somar_matrizes(int **m1, int **m2);

int main(){

    int **matriz1 = (int **)malloc(TAMANHO * sizeof(int *));    // alocando a matriz
    int **matriz2 = (int **)malloc(TAMANHO * sizeof(int *));

    int num1, num2;
    num1 = 59;
    num2 = 255;
    for(int i = 0; i < TAMANHO; i++){
        matriz1[i] = (int *)malloc(TAMANHO * sizeof(int));  // alocando as linhas
        matriz2[i] = (int *)malloc(TAMANHO * sizeof(int));
        for(int j = 0; j < TAMANHO; j++){
            matriz1[i][j] = num1;
            matriz2[i][j] = num2;
            num1++;
            num2--;
        }
    }

    int **resultado = somar_matrizes(matriz1, matriz2);

    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            printf("[%d][%d] = [%d]\t", i, j, resultado[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < TAMANHO; i++){
        free(matriz1[i]);
        free(matriz2[i]);
        free(resultado[i]);
    }
    free(matriz1);
    free(matriz2);
    free(resultado);
    return 0;
}


int ** somar_matrizes(int **m1, int **m2){
    int tamanho = TAMANHO;
    int **resultado = (int **)malloc(tamanho * sizeof(int *));
    for(int i = 0; i < tamanho; i++){
        resultado[i] = (int *)malloc(tamanho * sizeof(int));
        for(int j = 0; j < tamanho; j++){
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return resultado;
}
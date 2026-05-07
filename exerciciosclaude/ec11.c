#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4

void diagonal_principal(int **matriz, int *soma_principal, int *soma_secundaria);

int main(){

    int **matriz1 = (int **)malloc(TAMANHO * sizeof(int *));    // alocando a matriz

    int num1;
    num1 = 59;
    for(int i = 0; i < TAMANHO; i++){
        matriz1[i] = (int *)malloc(TAMANHO * sizeof(int));  // alocando as linhas
        for(int j = 0; j < TAMANHO; j++){
            matriz1[i][j] = num1;
            num1++;
        }
    }

    int principal = 0;
    int secundaria = 0;
    diagonal_principal(matriz1, &principal, &secundaria);
    printf("Soma da diagonal principal = %d, soma da diagonal secundaria = %d \n", principal, secundaria);

    for(int i = 0; i < TAMANHO; i++){
        free(matriz1[i]);
    }
    free(matriz1);
    return 0;
}


void diagonal_principal(int **matriz, int *soma_principal, int *soma_secundaria){
    int tam = TAMANHO;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i == j){
                *soma_principal += matriz[i][j];
            }
            if ((i + j) == tam - 1){
                *soma_secundaria += matriz[i][j];
            }
        }
    }
}

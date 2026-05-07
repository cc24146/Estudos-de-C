#include <stdio.h>
#include <stdlib.h>

int main(){
    return 0;
}

int ** multiplicacao_de_matrizes(int **m1, int **m2){
    int **resultado = (int **)malloc(2 * sizeof(int *));
    for(int i = 0; i < 2; i++){
        resultado[i] = (int *)malloc(2 * sizeof(int));
    }
    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                resultado[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return resultado;
}
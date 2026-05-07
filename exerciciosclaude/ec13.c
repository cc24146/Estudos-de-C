#include <stdio.h>, <stdlib.h>

int main(){
    return 0;
}

void transpor_matriz(int **matriz, int coluna, int linha){
    int aux;
    for(int i = 0; i < linha; i ++){
        for(int j = i + 1; j < coluna; j++){
            aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    return 0;
}

int * concatenar(int *primeiroVetor, int *segundoVetor, int t1, int t2){
    int *vetorNovo;
    int tamanhoNovo = t1 + t2;
    vetorNovo = (int *)malloc(tamanhoNovo* sizeof(int));
    int indiceNovo = 0;
    while(indiceNovo < t1){
        vetorNovo[indiceNovo] = primeiroVetor[indiceNovo];
        indiceNovo++;
    }
    for(int i = 0; i < t2; i++){
        vetorNovo[indiceNovo] = segundoVetor[i];
        indiceNovo++;
    }
    free(primeiroVetor);
    free(segundoVetor);
    return vetorNovo;
}
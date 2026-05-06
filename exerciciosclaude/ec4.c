#include <stdio.h>
#define TAMANHO 11

int busca_linear(int *vet, int procurado);
int main(){
    int vetor[TAMANHO];
    int numero = 0;
    for(int i = 0; i < TAMANHO; i++){
        vetor[i] = numero;
        numero++;
    }
    int indice = busca_linear(vetor, 12);
    printf("Indice do procurado é: %d\n", indice);
    return 0;
}

int busca_linear(int *vet, int procurado){
    for(int i = 0; i < TAMANHO; i ++){
        if(procurado == vet[i]){
            return i;
        }
    }
    return -1;
}
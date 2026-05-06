#include <stdio.h>
#define TAMANHO 11

void inverte_vetor(int *vet, int tamanho);
int main(){
    int vetor[TAMANHO];
    int numero = 0;
    for(int i = 0; i < TAMANHO; i++){
        vetor[i] = numero;
        numero++;
    }
    inverte_vetor(vetor, TAMANHO - 1);
    for(int i = 0; i < TAMANHO; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}

void inverte_vetor(int *vet, int tamanho){
    int inicio, fim, aux;
    inicio = aux = 0;
    fim = tamanho;
    for(int i = 0; i <= tamanho/2; i++){
        aux = inicio;
        vet[inicio] = vet[fim];
        vet[fim] = aux;
        inicio++;
        fim--;
    }
}
#include <stdio.h>
#define TAMANHO 11

int soma(int vetor[]);
float media(int soma);
int main(){
    int vetor[TAMANHO];
    int numero = 0;
    for(int i = 0; i < TAMANHO; i++){
        vetor[i] = numero;
        numero++;
    }
    int somaValores = soma(vetor);
    printf("soma dos valores do vetor é: %d\n", somaValores);
    printf("A media dos valores é: %.2f\n", media(somaValores));
    return 0;
}
int soma(int vetor[]){
    int valoresTotais = 0;
    for (int i = 0; i < TAMANHO; i++){
        valoresTotais += vetor[i];
    }
    return valoresTotais;
}
float media(int soma){
    return (float)soma / (TAMANHO -1);
}
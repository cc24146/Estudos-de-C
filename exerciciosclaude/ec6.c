#include <stdio.h>
#include <stdlib.h>

void alocar_vetor(int tamanho, int *vetor);
int main(){
    int tamanho_do_vetor;
    scanf("%d", &tamanho_do_vetor);
    int *vet;
    alocar_vetor(tamanho_do_vetor, vet);
    for(int i = 0; i < tamanho_do_vetor; i++){
        printf("%d", vet[i]);
    }
    free(vet);
    return 0;
}

void alocar_vetor(int tamanho, int *vetor){
    vetor = (int *)malloc(tamanho* sizeof(int));
    for(int i = 0; i < tamanho; i ++){
        vetor[i] = i*i;
    }

}
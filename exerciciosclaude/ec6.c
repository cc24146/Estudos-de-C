#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho_do_vetor;
    scanf("%d", &tamanho_do_vetor);
    int *vet;

    vet = (int *)malloc(tamanho_do_vetor* sizeof(int));
    for(int i = 0; i < tamanho_do_vetor; i ++){
        vet[i] = i*i;
        printf("%d\t", vet[i]);
    }
    printf("\n");
    free(vet);
    return 0;
}

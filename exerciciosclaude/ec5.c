#include <stdio.h>
#define TAMANHO 11

typedef enum Boolean{
    false,
    true
} bool;

int main(){
    return 0;
}

void bubble_sort(int *vet, int tamanho){
    bool organizado = false;
    int anterior, atual, aux, movimentos;
    atual = aux = movimentos= 0;
    anterior = vet[0];
    while(organizado == false){
        for(int i = 1; i < tamanho; i++){
            atual = vet[i];
            if(anterior > atual){
                aux = anterior;
                anterior = atual;
                atual = aux;
                movimentos++;
            }
            anterior = atual;
        }
        if(movimentos == 0){
            organizado = true;
        }
        
    }
}

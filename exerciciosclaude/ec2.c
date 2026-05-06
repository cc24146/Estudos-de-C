#include <stdio.h>

#define TAMANHO 9

void menor_maior_valor(int tamanho, float vetor[], char * resposta);
int main(){
    float vetor[TAMANHO];
    float numero = 0.0;
    for(int i = 0; i < TAMANHO; i++){
        vetor[i] = numero;
        numero++;
    }
    char mensagem[1000];
    menor_maior_valor(TAMANHO, vetor, mensagem);
    printf("%s", mensagem);
    return 0;
}

void menor_maior_valor(int tamanho, float vetor[], char * resposta){
    float maior, menor;
    int indiceMenor, indiceMaior;
    maior = menor = 0;
    indiceMaior = indiceMenor = 0;
    for(int i = 0; i < tamanho; i++){
        if(maior > vetor[i]){
            maior = vetor[i];
            indiceMaior = i;
        }
        if(menor < vetor[i]){
            menor = vetor[i];
            indiceMenor = i;
        }
    }
    sprintf(resposta, "O maior valor é %.2f, seu indice é %d. O menor valor é %.2f, seu indice é %d\n", maior, indiceMaior, menor, indiceMenor);
}
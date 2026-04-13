//escreva um programa que remova espaços em branco e caracteres de tabulações finais de cada linha de entrada e que delete as linhas inteiramente em branco
// ta meio estranho esse programa mas esta funcionando
#include <stdio.h>

#define TAMANHOMAXIMO 1000

int lelinha(char linhaAntes[], int tam);
int imprime(char linhaDepois[], int tam);

int main(){
    char linha[TAMANHOMAXIMO];
    int tam;
    while ((tam = lelinha(linha, TAMANHOMAXIMO)) > 0){
        imprime(linha, tam);
    }
    return 0;
}

int lelinha(char linhaAntes[], int tam){
    int i, c;
    
    for(i = 0; i < tam - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        linhaAntes[i] = c;
    }
    linhaAntes[i] = '\0';

    while(i > 0 && (linhaAntes[i -1] == ' ' || linhaAntes[i-1] == '\t')){
        i--;
        linhaAntes[i] = '\0';
    }
    return (i);
}

int imprime(char linhaDepois[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        putchar(linhaDepois[i]);
    }
    return 0;
}
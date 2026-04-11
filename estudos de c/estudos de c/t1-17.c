// faça um programa que inverta a entrada do usuário
#include <stdio.h>
#define TAMANHOMAXIMO 1000

int lelinha(char linhaAntes[], int tam);
int inverter(char linhaPraInverter[], char linhaParaArmazenar[], int tam);
int imprime(char linhaParaImprimir[], int tam);

int main(){
    int tam;
    char linha[TAMANHOMAXIMO];
    char guardar[TAMANHOMAXIMO];
    while((tam = lelinha(linha, TAMANHOMAXIMO)) > 0){
        inverter(linha, guardar, tam);
        imprime(guardar, tam);
    }
    return 0;
}

int lelinha(char linhaAntes[], int tam){
    int i, c;
    for(i = 0; i < tam - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        linhaAntes[i] = c;
    }
    linhaAntes[i] = '\0';
    return i;
}

int inverter(char linhaPraInverter[], char linhaParaArmazenar[], int tam){
    int i;
    for (i = 0; i < tam; i++){
        linhaParaArmazenar[i] = linhaPraInverter[tam - 1 - i];
    }
    linhaParaArmazenar[i] = '\0';
    return 0;
}

int imprime(char linhaParaImprimir[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        putchar(linhaParaImprimir[i]);
    }
    putchar('\n');
    return 0;
}
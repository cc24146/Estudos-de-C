// faça um programa que imprima todas as linhas de entrada com mais de 80 caracteres
#include <stdio.h>
#define TAMANHOMINIMO 80
#define TAMANHOMAXIMO 1000

int lelinha(char s[], int max);
int imprime(char s1[], int tam);

int main(){
    int tam;
    char linha[TAMANHOMAXIMO];

    while((tam = lelinha(linha, TAMANHOMAXIMO)) > 0){
        if (tam > TAMANHOMINIMO){
            imprime(linha, tam);
        }
    }
    return 0;
}

int lelinha(char s[], int max){
    int c, i;
    for(i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++ ){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return(i);
}

int imprime(char s1[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        putchar(s1[i]);
    }
    return 0;
}

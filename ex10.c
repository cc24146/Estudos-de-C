// variaveis externas
#include <stdio.h>

#define MAXLINHA 1000

int lelinha();
int copia();

char linha[MAXLINHA];
char guarda[MAXLINHA];
int max;



int main(){
    int tam;
    extern int max;
    extern char guarda[];

    max = 0;
    while((tam = lelinha()) > 0){
        if (tam > max){
            max = tam;
            copia();
        }
    }
    if(max > 0){
        printf("&s", guarda);
    }
    return 0;
}

int lelinha(){
    int c, i;
    extern char linha[];

    for(i = 0; i < MAXLINHA - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        linha[i] = c;
    }
    if(c == '\n'){
        linha[i] = c;
        i++;
    }
    linha[i] == '\0';
    return i;
}

int copia(){
    int i;
    extern char linha[], guarda[];

    i = 0;
    while((guarda[i] = linha[i]) != '\0'){
        ++i;
    }
}
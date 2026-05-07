#include <stdio.h>
#include "dia.c"

int main(){
    dia hoje = segunda;
    char *resposta = tipo_de_dia(hoje);
    printf("Hoje é %s\n", resposta);
    return 0;
}

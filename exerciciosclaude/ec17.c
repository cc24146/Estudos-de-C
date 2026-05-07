#include "calc.h"
#include <stdio.h>

int main(){
    int primeiro, segundo;
    printf("Escreva uma opeação de dois números: ");
    scanf("%d %c %d", primeiro, segundo);
    printf("")
    return 0;
}

int conta(int primeiro_numero, int segundo_numero, opc operacao){
    int resultado;
    switch (operacao)
    {
    case mais:
        resultado = primeiro_numero + segundo_numero;
        break;
    case menos:
        resultado = primeiro_numero - segundo_numero;
        break;
    case vezes:
        resultado = primeiro_numero * segundo_numero;
        break;
    case dividido:
        resultado = primeiro_numero / segundo_numero;
        break;
    default:
        resultado = 0;
        break;
    }
    return resultado;
}
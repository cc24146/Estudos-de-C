#include <stdio.h>
int main(){
    int ultimoC, c, saida;
    ultimoC = 0;
    while((c = getchar()) != EOF){
        if(!(c == ' ' && ultimoC == ' ')){ //se não tiver 2 espaços
            saida = putchar(c);
            ultimoC = c;
        }
    }
    printf("%i\n", saida);
    return 0;
}

/*faça um programa que copia sua entrada na saída, trocando cada cadeia de 2 ou mais espaços por um único espaço*/
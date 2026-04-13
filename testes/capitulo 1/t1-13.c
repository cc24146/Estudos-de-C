// faça um programa que converta sua entrada em letras minúsculas, usando uma função minusculo(c) 
// que retorna c se c não é uma letra, e a minúscula correspondete se c é uma letra
#include <stdio.h>

int minuscula(int c);

int main(){
    int c;
    while((c = getchar()) != EOF){
        putchar(minuscula(c));
    }
    return 0;
}

int minuscula(int c){
    if (!(c < 'A' || c > 'Z')){ // c é uma letra maiúscula
        return (c + ' ');       // ' ' é o valor 32 na tabela ascii - o mesmo valor da diferença entre letras maiúsculas e minúsculas
                                // poderia ter feito assim> return c(c + ('a' - 'A')) que vai sempre dar 32
    }
    return(c);

}
#include <stdio.h>

#define CENTRO '-'
#define DIREITA '>'
#define ESQUERDA '<'

int main(){
    int c;
    while((c = getchar()) != EOF){
        if (c == '\t'){
            putchar(CENTRO);
            putchar(DIREITA);
        }
        else if(c == '\b'){
            putchar(CENTRO);
            putchar(ESQUERDA);

        }
        else{
            putchar(c);
        }
    }
    return 0;
}

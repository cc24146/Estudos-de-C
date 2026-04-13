#include <stdio.h>
int main(){
    int numEspacos, numTab, numNovaL, c;
    numEspacos = numTab = numNovaL = 0;
    while ((c = getchar()) != EOF){
        if(c == '\n'){
            numNovaL++;
        }
        else if(c == ' '){
            numEspacos++;
        }
        else if(c == '\t'){
            numTab++;
        }
    }
    printf("numero de espaços: %i, numero de tabulações: %i, numero de novas linhas: %i\n", numEspacos, numTab, numNovaL);
    return 0;
}
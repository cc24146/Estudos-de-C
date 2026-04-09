// fazer um histograma HORIZONTAL do tamanho das palavras

#include <stdio.h>
//conta linhas, palavras, caracteres de entrada

#define NAO 0
#define SIM 1

int main(){
    int c,  numPala, numCarac, empalavra, i, n, j;
    int tamanhoPalavras[10];

    for(i = 0; i < 10; i++){
        tamanhoPalavras[i] = 0;
    }
    
    numPala = numCarac = i = 0;
    empalavra = NAO;

    while((c = getchar()) != EOF){
        ++numCarac;
        if(c == ' ' || c == '\n' || c == '\t'){
            if (empalavra == SIM){
                tamanhoPalavras[i] = numCarac - 1;
                i++;
                numCarac = 0;
                empalavra = NAO;
            }
        }
        else if(empalavra == NAO){
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                empalavra = SIM;
                ++numPala;
                
            }
        }
    }
    i = 0;
    printf("Histograma do tamanho das palavras: \n");
    for(i = 0; i < numPala; i++){
        n = tamanhoPalavras[i];
        printf("palavra %d: ", i + 1);
        for(j = 0; j < n; j++){
            printf("-");
        }
        printf("\n");
    }
    return 0;
}
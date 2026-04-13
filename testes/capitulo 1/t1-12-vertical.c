// fazer um histograma VERTICAL do tamanho das palavras

#include <stdio.h>
#define NAO 0
#define SIM 1

int main(){
    int c,  numPala, numCarac, empalavra, i, j, maiorPalavra;
    int tamanhoPalavras[10];

    for(i = 0; i < 10; i++){
        tamanhoPalavras[i] = 0;
    }
    
    numPala = numCarac = maiorPalavra = i = 0;
    empalavra = NAO;

    while((c = getchar()) != EOF){
        ++numCarac;
        if(c == ' ' || c == '\n' || c == '\t'){
            if (empalavra == SIM){
                tamanhoPalavras[i] = numCarac - 1;
                i++;
                empalavra = NAO;
                if (numCarac > maiorPalavra){
                    maiorPalavra = numCarac - 1;
                }
                numCarac = 0;
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
    for(i = maiorPalavra; i > 0; i--){
        for(j = 0; j < numPala; j++){
            if (tamanhoPalavras[j] >= i){
                printf("O");
            }
            else{
                printf(" ");
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
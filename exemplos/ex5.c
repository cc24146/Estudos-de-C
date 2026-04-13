#include <stdio.h>
//conta linhas, palavras, caracteres de entrada
#define NAO 0
#define SIM 1
int main(){
    int c, nl, np, nc, empalavra;
    nl = np = nc = 0;
    empalavra = NAO;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            empalavra = NAO;
        }
        else if(empalavra == NAO){
            empalavra = SIM;
            ++np;
        }
    }
    printf("%d linhas, %d palavras, %d caracteres\n", nl, np, nc);
    return 0;
}
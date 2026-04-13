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
            if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){ // poderia ter feito (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
                empalavra = SIM;
                ++np;
            }
        }
    }
    printf("%d linhas, %d palavras, %d caracteres\n", nl, np, nc);
    return 0;
}
#include <stdio.h>
#define SIM 1
#define NAO 0
int main (){
    int c, empalavra;
    empalavra = NAO;
    while((c = getchar()) != EOF){
        if (c == '\n' || c == '\t' || c == ' '){
            if (empalavra == SIM){
                empalavra = NAO;
                putchar('\n');
            }
        }
        else if(empalavra == NAO){
            empalavra = SIM;
            putchar(c);
        }
        else if(empalavra == SIM)
            putchar(c);
    }
    return 0;
}
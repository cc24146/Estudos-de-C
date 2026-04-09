#include <stdio.h>
int main(){
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF){
        if( c == '\n'){
            printf("ebaaaa");
            ++nl;
        }
        printf("nenhuma linha nova ");
    }
    printf("%d\n", nl);
    return 0;
}
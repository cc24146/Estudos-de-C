#include <stdio.h>

int main(){
    int lim = 10; // valor mockado
    for (int i = 0; i < lim - 1; i++){
        int c = getchar();
        if (c == EOF){
            break;
        }
        if (c == '\n'){
            break;
        }
    }
}

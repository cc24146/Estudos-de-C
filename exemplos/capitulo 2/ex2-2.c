#include <stdio.h>

int comprime (char s[], int c);

int main(){
    char s[100];
    int c;
    comprime(s, c);
    return 0;
}

int comprime(char s[], int c){
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++){
        if (s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    return 0;
}
#include <stdio.h>

int atoi(char s[]);
int minusculo(int c);

int main(){
    char s[100];
    atoi(s);
    return 0;
}

int atoi(char s[]){
    int n, i;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
        n = 10 * n + s[i] - '0';
    }
    return n;
}

int minusculo(int c){
    if (c >= 'A' && c <= 'Z'){
        return (c + 'a' - 'A');
    }
    else{
        return c;
    }
}
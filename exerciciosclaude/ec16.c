#include "led.h"
#include <stdio.h>

int main(){
    led como = APAGADO;
    char *estado = estado_led(como);
    printf("%s\n", estado);
    return 0;
}

char * estado_led(led como){
    if(como == APAGADO){
        return "o led está apagado";
    }
    else if (como == LIGADO){
        return "o led está ligado";
    }
    else if (como == PISCANDO){
        return "o led está piscando";
    }
    else{
        return "o led não existe";
    }
}
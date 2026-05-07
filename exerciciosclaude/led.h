#ifndef LED
#define LED

typedef enum LED{
    APAGADO,
    LIGADO,
    PISCANDO
} led;

char * estado_led(led como);

#endif
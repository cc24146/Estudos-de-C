#include <stdio.h>
#include "dias.h"

typedef struct Dia
{
    char (*tipo_de_dia) (dia hoje);
} Dia;

char * tipo_de_dia(dia hoje){
    if(hoje == sabado || hoje == domingo){
        return "fim de semana";
    }
    else{
        return "dia util";
    }
}
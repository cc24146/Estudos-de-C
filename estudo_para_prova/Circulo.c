#include <Formas.h>

// "classe" circulo
typedef struct Circulo
{
    Forma base;
    float raio;
} Circulo;

float circulo_area(void *self){
    Circulo *c = (Circulo *)self;
    return PI * c->raio * c->raio;
}

float circulo_perimetro(void *self){
    Circulo *c = (Circulo *)self;
    return 2 * PI * c->raio;
}




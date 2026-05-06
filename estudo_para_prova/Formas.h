#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14

// classe abstrata
// os ponteiros são os métodos 
// qualquer struct que embutir essa struct deve usar esses ponteiros para funcionar

typedef struct Forma{
    float (*area) (void *self);
    float (*perimetro) (void *self);
    void (*descrever) (void *self);
} Forma;

void imprimir_info(void *self){
    Forma *f = (Forma *)self;
    f -> descrever(self);
    printf("Area:       %.2f", f->area(self));
    printf("Perimetro   %.2f", f->perimetro(self));
}


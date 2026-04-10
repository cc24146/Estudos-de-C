// como n é uma variável temporária e não um objeto de referencia ao valor dentro da memória, pode fazer isso

int pot(int x, int n){
    int p;
    for(p = 1; n > 0; --n){
        p = p * x;
    }
    return(p);
}
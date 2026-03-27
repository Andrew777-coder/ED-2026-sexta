#include <stdio.h>

int calcula_potencia(int base, int expoente) {
    int resultado = 1;
    int i;

    if(expoente < 0) {
        return 0;
    }
    for(i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }
    return resultado;
}
int main() {
    int resultado = 0;
    
    resultado = calcula_potencia(2, 2);
    printf("base = 2, expoente  = 2, resultado = %d\n", resultado, resultado == 4);
    
    resultado = calcula_potencia(2, 3);
    printf("base = 2, expoente  = 3, resultado = %d\n", resultado, resultado == 8);
    
    resultado = calcula_potencia(2, 6);
    printf("base = 2, expoente  = 6, resultado = %d\n", resultado, resultado == 64);
    
    resultado = calcula_potencia(2, 8);
    printf("base = 2, expoente  = 8, resultado = %d\n", resultado, resultado == 256);
    
    resultado = calcula_potencia(2, 10);
    printf("base = 2, expoente  = 10, resultado = %d\n", resultado, resultado == 1024);

    return 0;
}
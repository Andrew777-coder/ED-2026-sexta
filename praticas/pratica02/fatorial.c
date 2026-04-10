#include <stdio.h>

int fatorial_iterativo(int n) {
    int i, fat = 1;
    if( n < 0) return 0;
    for(i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int fatorial_recursivo(int n) {
    if( n < 0) return 0;
    if( n == 0) return 1;
    return n * fatorial_recursivo(n - 1);
}

int main() {
    int resultado = 0;

    resultado = fatorial_iterativo(5);
    printf("Iterativo(5) = %d => %i\n", resultado, resultado == 120);
    resultado = fatorial_recursivo(5);
    printf("Recursivo(5) = %d => %i\n", resultado, resultado == 120);
    resultado = fatorial_iterativo(-1);
    printf("Iterativo(-1) = %d => %i\n", resultado, resultado == 0);
    resultado = fatorial_recursivo(-1);
    printf("Recursivo(-1) = %d => %i\n", resultado, resultado == 0);
    resultado = fatorial_iterativo(0);
    printf("Iterativo(0) = %d => %i\n", resultado, resultado == 1);
    resultado = fatorial_recursivo(0);
    printf("Recursivo(0) = %d => %i\n", resultado, resultado == 1);

    return 0;
}
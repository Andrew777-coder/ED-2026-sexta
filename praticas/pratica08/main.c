#include <stdio.h>
#include "fila.h"

int main() {

    Fila *fila = fila_criar();

    printf("Fila vazia? %s\n",
           fila_esta_vazia(fila) ? "Sim" : "Nao");
    printf("\nEnfileirando elementos...\n");

    fila_enfileirar(fila, 10);
    fila_enfileirar(fila, 20);
    fila_enfileirar(fila, 30);
    fila_enfileirar(fila, 40);
    fila_enfileirar(fila, 50);

    printf("Fila:\n");
    fila_exibir(fila);
    printf("\nInicio da fila: %d\n", fila_inicio(fila));
    printf("\nDesenfileirando...\n");
    printf("Removido: %d\n", fila_desenfileirar(fila));
    printf("Fila:\n");
    fila_exibir(fila);
    printf("\nNovo inicio: %d\n", fila_inicio(fila));
    printf("\nDesenfileirando novamente...\n");
    printf("Removido: %d\n", fila_desenfileirar(fila));
    printf("Fila:\n");
    fila_exibir(fila);
    fila_destruir(fila);

    return 0;
}
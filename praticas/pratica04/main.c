#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor original:\n");
    imprimir_vetor(vetor, TAMANHO);
    clock_t inicio = clock();
    quick_sort(vetor, 0, TAMANHO - 1);
    clock_t fim = clock();
    float duracao = (float)(fim - inicio) / CLOCKS_PER_SEC;

    printf("vetor depois de odernar em %fs\n", duracao);
    imprimir_vetor(vetor, TAMANHO);
}
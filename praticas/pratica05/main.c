#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 10000
void imprimir_vetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[TAMANHO];
    int copia1[TAMANHO];
    int copia2[TAMANHO];
    
    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        arr[i] = rand() % 1000; 
        copia1[i] = arr[i];
        copia2[i] = arr[i];
    }
    
    printf("Vetor original:\n");
    imprimir_vetor(arr, TAMANHO);
    
    int k = 10; 
    clock_t inicio = clock();
    int resultado1 = linear_search(copia1, TAMANHO, k);
    clock_t fim = clock();
    float tempo1 = (float)(fim - inicio) / CLOCKS_PER_SEC;
    printf("O %dº menor elemento (Linear Search) é: %d\n", k + 1, resultado1);
    printf("Tempo gasto (Linear Search): %f segundos\n", tempo1);
    
    inicio = clock();
    int resultado2 = quick_select(copia2, 0, TAMANHO - 1, k);
    fim = clock();
    float tempo2 = (float)(fim - inicio) / CLOCKS_PER_SEC;
    printf("O %dº menor elemento (Quick Select) é: %d\n", k, resultado2);
    printf("Tempo gasto (Quick Select): %f segundos\n", tempo2);

    return 0;
}
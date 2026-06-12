#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;
struct fila_t {
    No *inicio;
    No *fim;
};
Fila *fila_criar() {
    Fila *fila = (Fila *) malloc(sizeof(Fila));

    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}
int fila_esta_vazia(Fila *fila) {
    return fila->inicio == NULL;
}
void fila_enfileirar(Fila *fila, int valor) {
    No *novo = (No *) malloc(sizeof(No));

    novo->valor = valor;
    novo->proximo = NULL;
    if (fila_esta_vazia(fila)) {
        fila->inicio = novo;
        fila->fim = novo;
    } else {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
}
int fila_desenfileirar(Fila *fila) {
    if (fila_esta_vazia(fila)) {
        return -1;
    }
    No *temp = fila->inicio;
    int valor = temp->valor;
    fila->inicio = temp->proximo;
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }
    free(temp);

    return valor;
}
int fila_inicio(Fila *fila) {
    if (fila_esta_vazia(fila)) {
        return -1;
    }
    return fila->inicio->valor;
}
void fila_exibir(Fila *fila) {
    No *atual = fila->inicio;
    printf("INICIO -> ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}
void fila_destruir(Fila *fila) {
    while (!fila_esta_vazia(fila)) {
        fila_desenfileirar(fila);
    }
    free(fila);
}
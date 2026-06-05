#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;

struct lista_t {
    No *primeiro;
    No *ultimo;
};
Lista *lista_criar() {
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}
int lista_esta_vazia(Lista *lista) {
    return lista->primeiro == NULL;
}

void lista_inserir(Lista *lista, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;

    if (lista_esta_vazia(lista)) {
        lista->primeiro = novo;
        lista->ultimo = novo;
    } else {
        lista->ultimo->proximo = novo;
        lista->ultimo = novo;
    }
}

int lista_buscar(Lista *lista, int valor) {
    No *atual = lista->primeiro;
    while(atual != NULL) {
        if(atual->valor == valor) {
            return 1;
        }
        atual = atual->proximo;
    }
    return 0;
}
void lista_remover(Lista *lista, int valor) {
    No *atual = lista->primeiro;
    No *anterior = NULL;

    while(atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->proximo;
    }
    if(atual == NULL) {
        return;
    }
    if(anterior == NULL) {
        lista->primeiro = atual->proximo;
        if(lista->primeiro == NULL) {
            lista->ultimo = NULL;
        }
    } else {
        anterior->proximo = atual->proximo;
        if(atual == lista->ultimo) {
            lista->ultimo = anterior;
        }
    }
    free(atual);
    }
void lista_exibir(Lista *lista) {
    No *atual = lista->primeiro;
    while(atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}
void lista_destruir(Lista *lista) {
    No *atual = lista->primeiro;
    while(atual != NULL) {
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    free(lista);
}
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} No;
struct pilha_t {
    No *topo;
};
Pilha *pilha_criar() {
    Pilha *pilha = (Pilha *) malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}
int pilha_esta_vazia(Pilha *pilha) {
    return pilha->topo == NULL;
}
void pilha_empilhar(Pilha *pilha, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}
int pilha_desempilhar(Pilha *pilha) {
    if (pilha_esta_vazia(pilha)) {
        return -1;
    }
    No *temp = pilha->topo;
    int valor = temp->valor;
    pilha->topo = temp->proximo;
    free(temp);
    return valor;
}
int pilha_topo(Pilha *pilha) {
    if (pilha_esta_vazia(pilha)) {
        return -1;
    }
    return pilha->topo->valor;
}
void pilha_exibir(Pilha *pilha) {
    No *atual = pilha->topo;
    printf("TOPO -> ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}
void pilha_destruir(Pilha *pilha) {

    while (!pilha_esta_vazia(pilha)) {
        pilha_desempilhar(pilha);
    }
    free(pilha);
}
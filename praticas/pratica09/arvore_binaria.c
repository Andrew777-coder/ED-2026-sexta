#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

typedef struct no_t {
    int valor;
    struct no_t *esquerda;
    struct no_t *direita;
} No;
struct arvore_t {
    No *raiz;
};
No *criar_no(int valor) {
    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}
No *inserir_recursivo(No *raiz, int valor) {
    if (raiz == NULL) {
        return criar_no(valor);
    }
    if (valor < raiz->valor) {
        raiz->esquerda = inserir_recursivo(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor) {
        raiz->direita = inserir_recursivo(raiz->direita, valor);
    }
    return raiz;
}
void pre_ordem(No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        pre_ordem(raiz->esquerda);
        pre_ordem(raiz->direita);
    }
}
void em_ordem(No *raiz) {
    if (raiz != NULL) {
        em_ordem(raiz->esquerda);
        printf("%d ", raiz->valor);
        em_ordem(raiz->direita);
    }
}
void pos_ordem(No *raiz) {
    if (raiz != NULL) {
        pos_ordem(raiz->esquerda);
        pos_ordem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}
void destruir_recursivo(No *raiz) {
    if (raiz != NULL) {
        destruir_recursivo(raiz->esquerda);
        destruir_recursivo(raiz->direita);
        free(raiz);
    }
}
Arvore *arvore_criar() {
    Arvore *arvore = (Arvore *) malloc(sizeof(Arvore));
    arvore->raiz = NULL;

    return arvore;
}
int arvore_esta_vazia(Arvore *arvore) {
    return arvore->raiz == NULL;
}
void arvore_inserir(Arvore *arvore, int valor) {
    arvore->raiz = inserir_recursivo(arvore->raiz, valor);
}
void arvore_exibir_pre_ordem(Arvore *arvore) {
    pre_ordem(arvore->raiz);
    printf("\n");
}
void arvore_exibir_em_ordem(Arvore *arvore) {
    em_ordem(arvore->raiz);
    printf("\n");
}
void arvore_exibir_pos_ordem(Arvore *arvore) {
    pos_ordem(arvore->raiz);
    printf("\n");
}
void arvore_destruir(Arvore *arvore) {
    destruir_recursivo(arvore->raiz);
    free(arvore);
}
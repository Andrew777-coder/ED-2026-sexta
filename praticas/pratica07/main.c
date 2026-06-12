#include <stdio.h>
#include "pilha.h"

int main() {

    Pilha *pilha = pilha_criar();

    printf("Pilha vazia? %s\n",
           pilha_esta_vazia(pilha) ? "Sim" : "Nao");
    printf("\nEmpilhando elementos...\n");

    pilha_empilhar(pilha, 10);
    pilha_empilhar(pilha, 20);
    pilha_empilhar(pilha, 30);
    pilha_empilhar(pilha, 40);
    pilha_empilhar(pilha, 50);

    printf("Pilha:\n");
    pilha_exibir(pilha);
    printf("\nTopo da pilha: %d\n", pilha_topo(pilha));
    printf("\nDesempilhando...\n");
    printf("Removido: %d\n", pilha_desempilhar(pilha));
    printf("Pilha:\n");
    pilha_exibir(pilha);
    printf("\nNovo topo: %d\n", pilha_topo(pilha));
    printf("\nDesempilhando novamente...\n");
    printf("Removido: %d\n", pilha_desempilhar(pilha));
    printf("Pilha:\n");
    pilha_exibir(pilha);
    pilha_destruir(pilha);
    return 0;
}
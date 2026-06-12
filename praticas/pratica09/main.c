#include <stdio.h>
#include "arvore_binaria.h"

int main() {

    Arvore *arvore = arvore_criar();
    printf("Arvore vazia? %s\n",
           arvore_esta_vazia(arvore) ? "Sim" : "Nao");
    printf("\nInserindo elementos...\n");

    arvore_inserir(arvore, 50);
    arvore_inserir(arvore, 30);
    arvore_inserir(arvore, 70);
    arvore_inserir(arvore, 20);
    arvore_inserir(arvore, 40);
    arvore_inserir(arvore, 60);
    arvore_inserir(arvore, 80);

    printf("\nPre-Ordem:\n");
    arvore_exibir_pre_ordem(arvore);
    printf("\nEm Ordem:\n");
    arvore_exibir_em_ordem(arvore);
    printf("\nPos-Ordem:\n");
    arvore_exibir_pos_ordem(arvore);
    arvore_destruir(arvore);

    return 0;
}
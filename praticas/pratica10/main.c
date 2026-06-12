#include <stdio.h>
#include "tabela_hash.h"

int main() {
    TabelaHash *hash = hash_criar(10);
    printf("Tabela vazia? %s\n",
           hash_esta_vazia(hash) ? "Sim" : "Nao");
    printf("\nInserindo elementos...\n");

    hash_inserir(hash, 15);
    hash_inserir(hash, 25);
    hash_inserir(hash, 35);
    hash_inserir(hash, 12);
    hash_inserir(hash, 22);
    hash_inserir(hash, 42);

    printf("\nTabela Hash:\n");
    hash_exibir(hash);
    printf("\nBuscando 25...\n");
    if (hash_buscar(hash, 25))
        printf("25 encontrado!\n");
    else
        printf("25 nao encontrado!\n");
    printf("\nRemovendo 25...\n");
    hash_remover(hash, 25);
    printf("\nTabela apos remocao:\n");
    hash_exibir(hash);
    printf("\nBuscando 25 novamente...\n");
    if (hash_buscar(hash, 25))
        printf("25 encontrado!\n");
    else
        printf("25 nao encontrado!\n");
    hash_destruir(hash);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

int main() {
    Lista *lista = lista_criar();
    printf("Lista vazia? %s\n", lista_esta_vazia(lista) ? "Sim" : "Não");
    printf("\nInserindo elemento...\n");
    lista_inserir(lista, 10);
    lista_inserir(lista, 20);
    lista_inserir(lista, 30);
    lista_inserir(lista, 40);
    lista_inserir(lista, 50);
    printf("Lista: \n");
    lista_exibir(lista);
    printf("\nBuscando 30...\n");
    if(lista_buscar(lista, 30)) 
        printf("30 encontrado!\n");
     else 
        printf("30 não encontrado!\n");
    printf("\nRemovendo 30...\n");
    lista_remover(lista, 30);
    printf("Lista: \n");
    lista_exibir(lista);
    printf("\nRemovendo primeiro elemento(10)...\n");
    lista_remover(lista, 10);
    printf("Lista: \n");
    lista_exibir(lista);
    printf("\nRemovendo último elemento(50)...\n");
    lista_remover(lista, 50);
    printf("Lista: \n");
    lista_exibir(lista);
    printf("\nBuscando elemento(20)...\n");
    if(lista_buscar(lista, 20))
        printf("20 encontrado!\n");
    else
        printf("20 não encontrado!\n");
        printf("\nBuscando elemento(50)...\n");
    if(lista_buscar(lista, 50))
        printf("50 encontrado!\n");
    else
        printf("50 não encontrado!\n");
        lista_destruir(lista);
    return 0;
}
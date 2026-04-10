#include <stdio.h>

int busca_sequencial(int v[], int tamanho, int valor) {
    int i;
    for(i = 0; i < tamanho; i++) {
        if(v[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int v[100];
    int i;
    int posicao;

    for(i = 0; i < 100; i++) {
        v[i] = i + 1;
    }
    posicao = busca_sequencial(v, 100, 1);
    printf("Buscar 1 | Posicao= %d => %i\n", posicao, posicao == 0);
    posicao = busca_sequencial(v, 100, 50);
    printf("Buscar 50 | Posicao= %d => %i\n", posicao, posicao == 49);
    posicao = busca_sequencial(v, 100, 100);
    printf("Buscar 100 | Posicao= %d => %i\n", posicao, posicao == 99);
    posicao = busca_sequencial(v, 100, 101);
    printf("Buscar 101 | Posicao= %d => %i\n", posicao, posicao == -1);
    posicao = busca_sequencial(v, 100, 73);
    printf("Buscar 73 | Posicao= %d => %i\n", posicao, posicao == 72);
    return 0;
}
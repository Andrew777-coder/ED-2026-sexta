#include <stdio.h>
#include <time.h>

void preencher_matriz( int matris[10] [10]) {
    int i, j;
    int valor = 1;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matris[i][j] = valor;
        }
    }
}

void exibir_com_dois_lacos(int matriz[10] [10]) {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void exibir_com_um_laco(int matriz[10] [10]) {
    int k;
    int linha, coluna;

    for(k = 0; k < 100; k++) {
        linha = k / 10;
        coluna = k % 10;
        printf("%3d ", matriz[linha][coluna]);
             if((k +1) % 10 == 0) {
                 printf("\n");
        }
    }
}

int main() {
    int matriz[10] [10];
    clock_t inicio, fim;
    double tempo_dois_lacos, tempo_um_laco;

    preencher_matriz(matriz);

    printf("=== MATRIZ 10x10 COM DOIS LACOS ALINHADOS ===\n");
    inicio = clock();
    exibir_com_dois_lacos(matriz);
    fim = clock();
    tempo_dois_lacos = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo com dois lacos: %.8f segundos\n", tempo_dois_lacos);

    printf("=== MATRIZ 10x10 COM UM LACO ===\n");
    inicio = clock();
    exibir_com_um_laco(matriz);
    fim = clock();
    tempo_um_laco = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nTempo com um laco: %.8f segundos\n", tempo_um_laco);

    printf("\nComplexidade assintotica: \n", tempo_um_laco);
    printf("- Com dois lacos: 0(n^2)\n");
    printf("- Com um laco: 0(n^2)\n");

    return 0;
}
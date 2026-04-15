#include <stdio.h>
#include "conta.h"

int main() {
    Conta* c1 = conta_criar(123);

    conta_depositar(c1, 100.0);
    printf("Saldo: %.2f\n", conta_ver_saldo(c1));

    if (conta_sacar(c1, 30.0)) {
        printf("Saque realizado!\n");
    } else {
        printf("Saque falhou!\n");
    }

    printf("Saldo final: %.2f\n", conta_ver_saldo(c1));

    conta_destruir(c1);
    return 0;
}
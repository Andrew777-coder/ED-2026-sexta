#include <stdio.h>
#include "conta.h"

int main() {
    printf("=== INICIO DO SISTEMA BANCARIO ===\n\n");
    printf("criando conta...\n");
    Conta* c1 = conta_criar(2512082043);
    if(c1 == NULL) {
        printf("Erro ao criar conta\n");
        return 1;
    }
    printf("Conta criada com sucesso! Numero: 2512082043");
    printf("\nConsultando saldo inicial....\n");
    printf("Saldo atual: %.2f\n\n", conta_ver_saldo(c1));
    printf("Depositando 500.0 ...\n");
    conta_depositar(c1, 500.0);
printf("Deposito realizado!\n");
printf("Saldo atual: %.2f\n\n", conta_ver_saldo(c1));
printf("Sacando 2...\n");
    if(conta_sacar(c1, 2.0)) {
        printf("Saque realizado.\n");
    } else {
        printf("Saque falhou!\n");
    }
    printf("Saldo atual: %.2f\n\n", conta_ver_saldo(c1));

    printf("encerrando sua conta...\n");
    conta_destruir(c1);
    printf("Conta destruida.\n\n");

    printf("=== FIM DO SISTEMA ===\n\n");
    return 0;
}
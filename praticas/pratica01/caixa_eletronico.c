#include <stdio.h>

int caixa_eletronico(int valor) {
    int original = valor;
    int n200, n100, n50, n20, n10, n5, n2;

if(valor <= 0 || valor > 1000) {
   printf("saque = %d | ERRO\n", original);
    return 0;
}
n200 = valor / 200;
valor %= 200;

n100 = valor / 100;
valor %= 100;

n50 = valor / 50;
valor %= 50;

n20 = valor / 20;
valor %= 20;

n10 = valor / 10;
valor %= 10;

n5 = valor / 5;
valor %= 5;

n2 = valor / 2;
valor %= 2;

if(valor != 0) {
    printf("saque = %d | ERRO\n", original);
    return 0;
}

printf("saque = %d | 200=%d | 100=%d | 50=%d | 20=%d | 10=%d | 5=%d | 2=%d\n", original, n200, n100, n50, n20, n10, n5, n2);
return 1;
}

int main() {
    int resultado = 0;

    resultado = caixa_eletronico(384);
    printf("teste saque 384 => %i\n", resultado == 1);

    resultado = caixa_eletronico(380);
    printf("teste saque 380 => %i\n", resultado == 1);

    resultado = caixa_eletronico(550);
    printf("teste saque 550 => %i\n", resultado == 1);

    resultado = caixa_eletronico(0);
    printf("teste saque 0 => %i\n", resultado == 1);

    resultado = caixa_eletronico(1000);
    printf("teste saque 1000 => %i\n", resultado == 1);

    return 0;
}
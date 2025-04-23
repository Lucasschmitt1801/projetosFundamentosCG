#include <stdio.h>

int main() {
    float cotacao, quantidade, total;
    printf("Cotação do dólar: ");
    scanf("%f", &cotacao);
    printf("Quantidade de dólares: ");
    scanf("%f", &quantidade);
    total = cotacao * quantidade;
    printf("Valor total: R$ %.2f\n", total);
    return 0;
}
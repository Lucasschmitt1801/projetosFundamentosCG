#include <stdio.h>

int main() {
    float peso, valor;
    printf("Peso do prato (kg): ");
    scanf("%f", &peso);
    valor = peso * 40.0;
    printf("Valor a pagar: R$ %.2f\n", valor);
    return 0;
}
#include <stdio.h>

int main() {
    float numero;

    // Solicita ao usuário o valor original do produto
    printf("Insira o valor original do produto: R$ ");
    scanf("%f", &numero);

    // Calcula o imposto (10% do valor original)
    float imposto = numero * 0.10;

    // Adiciona o imposto ao valor original
    float valorcomimposto = numero + imposto;

    // Aplica o desconto fixo de R$5,00
    float valorfinal = valorcomimposto - 5.00;

    // Exibe o valor final do produto
    printf("O preço final do produto é: R$ %.2f\n", valorfinal);

    return 0;
}
#include <stdio.h>

int main() {
    float preco_litro, valor_disponivel, litros;
    printf("Preço do litro: ");
    scanf("%f", &preco_litro);
    printf("Valor disponível: ");
    scanf("%f", &valor_disponivel);
    litros = valor_disponivel / preco_litro;
    printf("Você pode abastecer %.2f litros\n", litros);
    return 0;
}
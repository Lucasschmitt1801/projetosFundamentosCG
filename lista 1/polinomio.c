#include <stdio.h>

int main() {
    float a = 2.0;
    float b = 3.0;
    float c = 1.0;

    float x;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    float y = a * x * x + b * x + c;

    printf("O valor do polinômio y = %.2fx^2 + %.2fx + %.2f para x = %.2f é: %.2f\n", a, b, c, x, y);

    return 0;
}
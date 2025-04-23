#include <stdio.h>

int main() {
    float num1, num2;
    printf("Dividendo: ");
    scanf("%f", &num1);
    printf("Divisor: ");
    scanf("%f", &num2);
    
    if(num2 != 0) {
        printf("Resultado: %.2f\n", num1 / num2);
    } else {
        printf("Erro: Divisão por zero!\n");
    }
    return 0;
}
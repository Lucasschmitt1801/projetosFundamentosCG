#include <stdio.h>

int main() {
    float numero;
    printf("Número: ");
    scanf("%f", &numero);
    
    if(numero > 0) {
        printf("Dobro: %.2f\n", numero * 2);
    } else {
        printf("Triplo: %.2f\n", numero * 3);
    }
    return 0;
}
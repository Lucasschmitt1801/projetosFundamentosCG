#include <stdio.h>

int main() {
    int numero;
    printf("Número: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }
    return 0;
}
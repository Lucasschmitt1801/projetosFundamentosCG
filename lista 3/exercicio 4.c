#include <stdio.h>

int main() {
    int numero;
    printf("Número: ");
    scanf("%d", &numero);
    
    if(numero % 3 == 0) {
        printf("Divisível por 3\n");
    } else {
        printf("Não divisível por 3\n");
    }
    return 0;
}
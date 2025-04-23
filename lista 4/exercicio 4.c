#include <stdio.h>

int main() {
    int divisor, inicio, fim;
    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);
    printf("Início do intervalo: ");
    scanf("%d", &inicio);
    printf("Final do intervalo: ");
    scanf("%d", &fim);
    
    printf("Números divisíveis por %d no intervalo de %d a %d:\n", divisor, inicio, fim);
    for(int num = inicio; num <= fim; num++) {
        if(num % divisor == 0) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
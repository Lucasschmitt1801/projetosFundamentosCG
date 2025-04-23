#include <stdio.h>

int main() {
    char continuar;
    do {
        int num;
        printf("Entre com um número (1-9): ");
        scanf("%d", &num);
        
        for(int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num*i);
        }
        
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');
    
    return 0;
}
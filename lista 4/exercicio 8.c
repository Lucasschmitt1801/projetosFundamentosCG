#include <stdio.h>

int main() {
    char continuar;
    do {
        int num, fatorial = 1;
        printf("Entre com um número: ");
        scanf("%d", &num);
        
        for(int i = 1; i <= num; i++) {
            fatorial *= i;
        }
        
        printf("Fatorial de %d é %d\n", num, fatorial);
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');
    
    return 0;
}
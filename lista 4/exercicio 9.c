#include <stdio.h>

int main() {
    int n;
    char caracter;
    printf("Entre com um número: ");
    scanf("%d", &n);
    printf("Entre com um caracter: ");
    scanf(" %c", &caracter);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c", caracter);
        }
        printf("\n");
    }
    return 0;
}
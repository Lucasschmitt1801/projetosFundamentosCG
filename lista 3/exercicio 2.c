#include <stdio.h>

int main() {
    float a, b, c;
    printf("Valor A: ");
    scanf("%f", &a);
    printf("Valor B: ");
    scanf("%f", &b);
    printf("Valor C: ");
    scanf("%f", &c);
    
    if((a + b) < (a + c)) {
        printf("A + B é menor que A + C\n");
    } else {
        printf("A + B não é menor que A + C\n");
    }
    return 0;
}
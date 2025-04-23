#include <stdio.h>

int main() {
    float num, soma = 0;
    for(int i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &num);
        soma += num;
    }
    printf("Soma: %.2f, Média: %.2f\n", soma, soma/15);
    return 0;
}
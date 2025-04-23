#include <stdio.h>

int main() {
    int minutos, segundos;
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    segundos = minutos * 60;
    printf("%d minutos equivalem a %d segundos\n", minutos, segundos);
    return 0;
}
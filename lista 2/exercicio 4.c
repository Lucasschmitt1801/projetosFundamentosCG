#include <stdio.h>

int main() {
    float grau_a, grau_b, media;
    printf("Nota Grau A: ");
    scanf("%f", &grau_a);
    printf("Nota Grau B: ");
    scanf("%f", &grau_b);
    media = (grau_a * 1.0/3) + (grau_b * 2.0/3);
    printf("Média final: %.1f\n", media);
    return 0;
}
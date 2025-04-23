
#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float peso1;
    float peso2;
    float peso3;
    float mediaPonderada;
    
    printf("Insira a nota 1 ");
    scanf("%f", &nota1);
    
    printf("Insira a nota 2 ");
    scanf("%f", &nota2);
    
    printf("Insira a nota 3 ");
    scanf("%f", &nota3);
    
    printf("Insira o peso 1 ");
    scanf("%f", &peso1);
    
    printf("Insira o peso 2 ");
    scanf("%f", &peso2);
    
    printf("Insira o peso 3 ");
    scanf("%f", &peso3);
    
    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média ponderada das notas é: %.2f\n", mediaPonderada);

    return 0;
    
}

#include <stdio.h>

int main() {
    float tempo1 = 2;
    float tempo2 = 3;
    float velocidade1 = 12;
    float velocidade2 = 18;
    float distancia1, distancia2, distancia;
    
    distancia1 = tempo1 * velocidade1;
    distancia2 = tempo2 * velocidade2;
    
    distancia = distancia1 + distancia2;
    
    printf ("A distancia total é: %.2f\n", distancia);
    return 0;
}

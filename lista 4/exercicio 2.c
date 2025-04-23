#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int numero = rand() % 10 + 1;
    int tentativas = 3, palpite;
    
    for(int tentativa = 1; tentativa <= tentativas; tentativa++) {
        printf("Tentativa %d: ", tentativa);
        scanf("%d", &palpite);
        
        if(palpite == numero) {
            printf("Acertou!\n");
            return 0;
        } else if(palpite < numero) {
            printf("O número é maior\n");
        } else {
            printf("O número é menor\n");
        }
    }
    
    printf("Errou! O número era %d\n", numero);
    return 0;
}
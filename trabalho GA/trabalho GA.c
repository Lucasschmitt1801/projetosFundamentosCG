#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int exibirMenu() {
    int opcao;
    printf("\n=== SIMULACAO DE PROPAGACAO VIRAL ===\n");
    printf("1 - Nova Simulacao\n");
    printf("2 - Sair do Programa\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

float verificarEvento(float taxa_contagio) {
    int sorteio = rand() % 100 + 1; 
    
    if (sorteio <= 15) { 
        taxa_contagio *= 1.25;
        printf(" (Evento: Aglomeracao! Taxa aumentou para %.2f%%)", taxa_contagio);
    } else if (sorteio <= 25) { 
        taxa_contagio *= 0.80;
        printf(" (Evento: Isolamento voluntario! Taxa diminuiu para %.2f%%)", taxa_contagio);
    } else if (sorteio <= 30) { 
        taxa_contagio *= 0.70;
        printf(" (Evento: Midia gera alerta! Taxa diminuiu para %.2f%%)", taxa_contagio);
    } else if (sorteio <= 35) { 
        taxa_contagio *= 1.50;
        printf(" (Evento: Mutacao mais contagiosa! Taxa aumentou para %.2f%%)", taxa_contagio);
    }
    
    return taxa_contagio;
}

int main() {
    srand(time(NULL)); 
    
    int opcao;
    do {
        opcao = exibirMenu();
        
        if (opcao == 1) {
            int populacao, infectados_iniciais, dias_simulacao;
            float taxa_contagio, percentual_vacinados, efetividade_vacina;
            
            printf("\n=== NOVA SIMULACAO ===\n");
            
            do {
                printf("Populacao total (int > 0): ");
                scanf("%d", &populacao);
            } while (populacao <= 0);
            
            do {
                printf("Numero de pessoas inicialmente infectadas (int > 0 e <= %d): ", populacao);
                scanf("%d", &infectados_iniciais);
            } while (infectados_iniciais <= 0 || infectados_iniciais > populacao);
            
            do {
                printf("Taxa de contagio (0 a 100%%): ");
                scanf("%f", &taxa_contagio);
            } while (taxa_contagio < 0 || taxa_contagio > 100);
            
            do {
                printf("Porcentagem da populacao vacinada (0 a 100%%): ");
                scanf("%f", &percentual_vacinados);
            } while (percentual_vacinados < 0 || percentual_vacinados > 100);
            
            do {
                printf("Efetividade da vacina (0 a 100%%): ");
                scanf("%f", &efetividade_vacina);
            } while (efetividade_vacina < 0 || efetividade_vacina > 100);
            
            do {
                printf("Numero de dias da simulacao (int > 0): ");
                scanf("%d", &dias_simulacao);
            } while (dias_simulacao <= 0);
            
            int total_infectados = infectados_iniciais;
            int total_vacinados = round(populacao * percentual_vacinados / 100);
            int vacinados_infectados = 0;
            float taxa_original = taxa_contagio;
            
            printf("\n=== RESULTADOS DA SIMULACAO ===\n");
            printf("Dia 1: %d infectados\n", total_infectados);
            
            for (int dia = 2; dia <= dias_simulacao; dia++) {
                int suscetiveis = populacao - total_infectados;
                if (suscetiveis <= 0) {
                    printf("\nToda a populacao foi infectada antes do final da simulacao!\n");
                    break;
                }
                
                taxa_contagio = verificarEvento(taxa_original);
                
                float estimativa = total_infectados * taxa_contagio / 100;
                int novos_infectados = round(estimativa);
                
                if (novos_infectados > suscetiveis) {
                    novos_infectados = suscetiveis;
                }
                
                total_infectados += novos_infectados;
                
                int novos_vacinados_infectados = round(novos_infectados * (percentual_vacinados/100) * (1 - efetividade_vacina/100));
                vacinados_infectados += novos_vacinados_infectados;
                
                printf("Dia %d: %d infectados (+%d)", dia, total_infectados, novos_infectados);
                
                taxa_contagio = taxa_original;
            }
            
            printf("\n\n=== RESUMO FINAL ===\n");
            printf("Populacao: %d\n", populacao);
            printf("Total infectados: %d\n", total_infectados);
            printf("Populacao vacinada: %d\n", total_vacinados);
            printf("Vacinados infectados: %d\n", vacinados_infectados);
            printf("Populacao saudavel: %d\n", populacao - total_infectados);
            
        } else if (opcao != 2) {
            printf("Opcao invalida! Tente novamente.\n");
        }
        
    } while (opcao != 2);
    
    printf("Programa encerrado. Ate mais!\n");
    return 0;
}
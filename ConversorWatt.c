#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main() {
    float valor, resultado;
    char unidade_inicial, unidade_final;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Digite a unidade inicial (W, kW, CV): ");
    scanf(" %c", &unidade_inicial);

    printf("Digite a unidade final (W, kW, CV): ");
    scanf(" %c", &unidade_final);

    // Conversões 0
    switch (unidade_inicial) {
        case 'W':
            switch (unidade_final) {
                case 'kW':
                    resultado = valor / 1000;
                    break;
                case 'CV':
                    resultado = valor / 735.5;
                    break;
                default:
                    printf("Unidade final inválida.\n");
                    return 1;
            }
            break;
        case 'kW':
            switch (unidade_final) {
                case 'W':
                    resultado = valor * 1000;
                    break;
                case 'CV':
                    resultado = valor * 1.3596;
                    break;
                default:
                    printf("Unidade final inválida.\n");
                    return 1;
            }
            break;
        case 'CV':
            switch (unidade_final) {
                case 'W':
                    resultado = valor * 735.5;
                    break;
                case 'kW':
                    resultado = valor / 1.3596;
                    break;
                default:
                    printf("Unidade final inválida.\n");
                    return 1;
            }
            break;
        default:
            printf("Unidade inicial inválida.\n");
            return 1;
    }

    printf("%.2f %c = %.2f %c\n", valor, unidade_inicial, resultado, unidade_final);

    return 0;
}

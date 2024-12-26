#include "conversorLib.h"

char lerOpcao(char *msg, char limite1, char limite2) {
    int opc = limite2 + 1;

    do {
        printf("%s", msg);
        scanf("%i", &opc);
        while (getchar() != '\n');
    } while (opc < limite1 || opc > limite2);
    return (char)opc;
}

void converterVelocidade() {
    char opc[2];    //opc[0] - Opção do menu para a unidade de entrada
                    //opc[1] - Opção do menu para a unidade de saída

    float entrada = 0;  //Valor numérico da velocidade de entrada
    float saida;        //Valor numérico da velocidade convertida

    printf("-----------------------------------------------------------\n"
           "[1] metros por segundo (m/s)\n"
           "[2] quilometros por hora (km/h)\n"
           "[3] milhas por hora (mph)\n"
           "[4] nos (kn)\n\n");

    opc[0] = lerOpcao(mensagem[0], 1, 4) - 1;
    opc[1] = lerOpcao(mensagem[1], 1, 4) - 1;
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &entrada);
    while (getchar() != '\n');  //Limpa o buffer do teclado (necessário após scanf())
    saida = entrada * fator[opc[0]][opc[1]];

    printf("\nDe [%s] para [%s]:\n"
           "%f %s = %f %s",
           unidade[opc[0]], unidade[opc[1]],
           entrada, unidade[opc[0]], saida, unidade[opc[1]]);

    while (getchar() != '\n');  //Espera um ENTER do usuário (apenas uma pausa)
}

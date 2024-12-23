#include <stdio.h>
//Conversor de unidades
char lerOpcao(char *msg, char limite1, char limite2);
void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura(); // Função para conversão de temperatura
void converterVelocidade();

int main() {
    int escolha;

    do {
        printf("-----------------------------------------------------------\n"
               "*** Conversor de Unidades ***\n\n"
               "[1] Comprimento\n"
               "[2] Massa\n"
               "[3] Volume\n"
               "[4] Temperatura\n"
               "[5] Velocidade\n"
               "[0] Sair\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: converterComprimento(); break;
            case 2: converterMassa(); break;
            case 3: converterVolume(); break;
            case 4: converterTemperatura(); break; // Chamada para a função de temperatura
            case 5: converterVelocidade(); break;
            case 0:
                printf("-----------------------------------------------------------\n"
                       "\t     Obrigado por utilizar o Conversor\n\n"
                       "EmbarcaTech - Residencia Tecnologica em Sistemas Embarcados\n"
                       "\t\tMentor: Fabio Oliveira Silva\n"
                       "\t\t    Grupo 3 - Subgrupo 1\n\n");
                break;
            default: printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}

char lerOpcao(char *msg, char limite1, char limite2) {
    int opc = limite2 + 1;

    do {
        printf("%s", msg);
        scanf("%i", &opc);
        while (getchar() != '\n');
    } while (opc < limite1 || opc > limite2);
    return (char)opc;
}

void converterComprimento() {
    int escolha;
    double valor;

    printf("\n*** Conversão de Comprimento ***\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1: printf("%.2lf metros = %.2lf centímetros\n", valor, valor * 100); break;
        case 2: printf("%.2lf metros = %.2lf milímetros\n", valor, valor * 1000); break;
        case 3: printf("%.2lf centímetros = %.2lf metros\n", valor, valor / 100); break;
        case 4: printf("%.2lf milímetros = %.2lf metros\n", valor, valor / 1000); break;
        default: printf("Opção inválida.\n");
    }
}

void converterMassa() {
    int escolha;
    double valor;

    printf("\n*** Conversão de Massa ***\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Quilogramas para Toneladas\n");
    printf("3. Gramas para Quilogramas\n");
    printf("4. Toneladas para Quilogramas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1: printf("%.2lf quilogramas = %.2lf gramas\n", valor, valor * 1000); break;
        case 2: printf("%.2lf quilogramas = %.2lf toneladas\n", valor, valor / 1000); break;
        case 3: printf("%.2lf gramas = %.2lf quilogramas\n", valor, valor / 1000); break;
        case 4: printf("%.2lf toneladas = %.2lf quilogramas\n", valor, valor * 1000); break;
        default: printf("Opção inválida.\n");
    }
}

void converterVolume() {
    int escolha;
    double valor;

    printf("\n*** Conversão de Volume ***\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Litros para Metros Cúbicos\n");
    printf("3. Mililitros para Litros\n");
    printf("4. Metros Cúbicos para Litros\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1: printf("%.2lf litros = %.2lf mililitros\n", valor, valor * 1000); break;
        case 2: printf("%.2lf litros = %.2lf metros cúbicos\n", valor, valor / 1000); break;
        case 3: printf("%.2lf mililitros = %.2lf litros\n", valor, valor / 1000); break;
        case 4: printf("%.2lf metros cúbicos = %.2lf litros\n", valor, valor * 1000); break;
        default: printf("Opção inválida.\n");
    }
}

void converterTemperatura() {
    int escolha;
    double valor;

    printf("\n*** Conversão de Temperatura ***\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1: printf("%.2lf Celsius = %.2lf Fahrenheit\n", valor, (valor * 9/5) + 32); break;
        case 2: printf("%.2lf Celsius = %.2lf Kelvin\n", valor, valor + 273.15); break;
        case 3: printf("%.2lf Fahrenheit = %.2lf Celsius\n", valor, (valor - 32) * 5/9); break;
        case 4: printf("%.2lf Fahrenheit = %.2lf Kelvin\n", valor, (valor - 32) * 5/9 + 273.15); break;
        case 5: printf("%.2lf Kelvin = %.2lf Celsius\n", valor, valor - 273.15); break;
        case 6: printf("%.2lf Kelvin = %.2lf Fahrenheit\n", valor, (valor - 273.15) * 9/5 + 32); break;
        default: printf("Opção inválida.\n");
    }
}

void converterVelocidade() {
    static const float fator[4][4] = {{1.000000, 3.600000, 2.236936, 1.943844},
                                      {0.277778, 1.000000, 0.621371, 0.539957},
                                      {0.447040, 1.609344, 1.000000, 0.868976},
                                      {0.514444, 1.852000, 1.150779, 1.000000}};
    static char unidade[4][5] = {"m/s", "km/h", "mph", "kn"};
    static char mensagem[2][39] = {"Digite a opcao da unidade de entrada: ",
                                   "Digite a opcao da unidade de saida: "};

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
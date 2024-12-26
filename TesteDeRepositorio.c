#include "conversorLib.h"
//Conversor de unidades

void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura(); // Função para conversão de temperatura


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

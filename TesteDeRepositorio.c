#include <stdio.h>
//Conversor de unidades
void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura(); // Função para conversão de temperatura
void converterDados(); // Função para conversão de unidade dos dados

int main() {
    int escolha;

    do {
        printf("\n*** Conversor de Unidades ***\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n"); // Adicionada opção de temperatura
        printf("5. Dados\n"); // Adicionada a opção de dados
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: converterComprimento(); break;
            case 2: converterMassa(); break;
            case 3: converterVolume(); break;
            case 4: converterTemperatura(); break; // Chamada para a função de temperatura
            case 5: converterDados(); break; // Chamada da função de Dados
            case 0: printf("Saindo...\n"); break;
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

#include <stdio.h>

void converterDados() {
    int escolha;
    double valor;

    printf("\n*** Conversão de Unidades de Dados ***\n");
    printf("1. Bits para Bytes\n");
    printf("2. Bits para Kilobytes (KB)\n");
    printf("3. Bits para Megabytes (MB)\n");
    printf("4. Bits para Gigabytes (GB)\n");
    printf("5. Bits para Terabytes (TB)\n");
    printf("6. Bytes para Kilobytes (KB)\n");
    printf("7. Bytes para Megabytes (MB)\n");
    printf("8. Bytes para Gigabytes (GB)\n");
    printf("9. Bytes para Terabytes (TB)\n");
    printf("10. Kilobytes (KB) para Megabytes (MB)\n");
    printf("11. Kilobytes (KB) para Gigabytes (GB)\n");
    printf("12. Kilobytes (KB) para Terabytes (TB)\n");
    printf("13. Megabytes (MB) para Gigabytes (GB)\n");
    printf("14. Megabytes (MB) para Terabytes (TB)\n");
    printf("15. Gigabytes (GB) para Terabytes (TB)\n");
    printf("16. Kilobytes (KB) para Bytes\n");
    printf("17. Megabytes (MB) para Kilobytes (KB)\n");
    printf("18. Gigabytes (GB) para Megabytes (MB)\n");
    printf("19. Terabytes (TB) para Gigabytes (GB)\n");
    printf("20. Terabytes (TB) para Megabytes (MB)\n");
    printf("21. Terabytes (TB) para Kilobytes (KB)\n");
    printf("22. Bytes para Bits\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (escolha) {
        case 1: printf("%.2lf Bits = %.8lf Bytes\n", valor, valor / 8); break;
        case 2: printf("%.2lf Bits = %.8lf Kilobytes (KB)\n", valor, valor / 8192); break;  // 1 KB = 8 bits * 1024
        case 3: printf("%.2lf Bits = %.8lf Megabytes (MB)\n", valor, valor / 8388608); break;  // 1 MB = 8 * 1024 * 1024 bits
        case 4: printf("%.2lf Bits = %.8lf Gigabytes (GB)\n", valor, valor / 8589934592.0); break;  // 1 GB = 8 * 1024 * 1024 * 1024 bits
        case 5: printf("%.2lf Bits = %.8lf Terabytes (TB)\n", valor, valor / 8796093022208.0); break;  // 1 TB = 8 * 1024^4 bits
        case 6: printf("%.2lf Bytes = %.8lf Kilobytes (KB)\n", valor, valor / 1024); break;
        case 7: printf("%.2lf Bytes = %.8lf Megabytes (MB)\n", valor, valor / 1048576); break;  // 1 MB = 1024 * 1024 bytes
        case 8: printf("%.2lf Bytes = %.8lf Gigabytes (GB)\n", valor, valor / 1073741824); break;  // 1 GB = 1024 * 1024 * 1024 bytes
        case 9: printf("%.2lf Bytes = %.8lf Terabytes (TB)\n", valor, valor / 1099511627776.0); break;  // 1 TB = 1024^4 bytes
        case 10: printf("%.2lf Kilobytes (KB) = %.8lf Megabytes (MB)\n", valor, valor / 1024); break;
        case 11: printf("%.2lf Kilobytes (KB) = %.8lf Gigabytes (GB)\n", valor, valor / 1048576); break;  // 1 GB = 1024^2 KB
        case 12: printf("%.2lf Kilobytes (KB) = %.8lf Terabytes (TB)\n", valor, valor / 1073741824.0); break;  // 1 TB = 1024^3 KB
        case 13: printf("%.2lf Megabytes (MB) = %.8lf Gigabytes (GB)\n", valor, valor / 1024); break;
        case 14: printf("%.2lf Megabytes (MB) = %.8lf Terabytes (TB)\n", valor, valor / 1048576); break;  // 1 TB = 1024^2 MB
        case 15: printf("%.2lf Gigabytes (GB) = %.8lf Terabytes (TB)\n", valor, valor / 1024); break;
        case 16: printf("%.2lf Kilobytes (KB) = %.8lf Bytes\n", valor, valor * 1024); break;
        case 17: printf("%.2lf Megabytes (MB) = %.8lf Kilobytes (KB)\n", valor, valor * 1024); break;
        case 18: printf("%.2lf Gigabytes (GB) = %.8lf Megabytes (MB)\n", valor, valor * 1024); break;
        case 19: printf("%.2lf Terabytes (TB) = %.8lf Gigabytes (GB)\n", valor, valor * 1024); break;
        case 20: printf("%.2lf Terabytes (TB) = %.8lf Megabytes (MB)\n", valor, valor * 1048576); break;  // 1 TB = 1024 * 1024 MB
        case 21: printf("%.2lf Terabytes (TB) = %.8lf Kilobytes (KB)\n", valor, valor * 1073741824.0); break;  // 1 TB = 1024^3 KB
        case 22: printf("%.2lf Bytes = %.8lf Bits\n", valor, valor * 8); break;
        default: printf("Opção inválida.\n"); break;
    }
}

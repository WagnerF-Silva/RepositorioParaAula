#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double SEG_TO_MIN(float);
long double MIN_TO_HOUR(float);
long double HOUR_TO_SEG(float);
long double HOUR_TO_MIN(float);
long double MIN_TO_SEG(float);

long double SEG_TO_MIN(float n){
    return (n / 60);
}

long double MIN_TO_HOUR(float n){
    return (n / 60);
}

long double HOUR_TO_SEG(float n){
    return (n * 3600);
}

long double HOUR_TO_MIN(float n){
    return (n * 60);
}

long double MIN_TO_SEG(float n){
    return(n * 60);
}

void showMenu() {
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1. Converter segundos para minutos (SEG_TO_MIN)\n");
    printf("2. Converter minutos para horas (MIN_TO_HOUR)\n");
    printf("3. Converter horas para segundos (HOUR_TO_SEG)\n");
    printf("4. Converter horas para minutos (HOUR_TO_MIN)\n");
    printf("5. Converter minutos para segundos (MIN_TO_SEG)\n");
    printf("Digite o numero correspondente a sua escolha: ");
}

int main(){
    int op;
    float aux;
    long double resultado;

        do{
            showMenu();
            scanf("%d", &op);
                switch(op){
                    case 1:
                        scanf("%f", &aux);
                        resultado = SEG_TO_MIN(aux);
                        printf("Conversão: %.2f\n", resultado);
                        break;
                    case 2:
                        scanf("%f", &aux);
                        resultado = MIN_TO_HOUR(aux);
                        printf("Conversão: %.2f\n", resultado);
                        break;
                    case 3:
                        scanf("%f", &aux);
                        resultado = HOUR_TO_SEG(aux);
                        printf("Conversão: %.2f\n", resultado);
                        break;
                    case 4:
                        scanf("%f", &aux);
                        resultado = HOUR_TO_MIN(aux);
                        printf("Conversão: %.2f\n", resultado);
                        break;
                    case 5:
                        scanf("%f", &aux);
                        resultado = MIN_TO_SEG(aux);
                        printf("Conversão: %.2f\n", resultado);
                        break;
                }
        } while( op != 0);
}












#include <stdio.h>

static const float fator[4][4] = {{1.000000, 3.600000, 2.236936, 1.943844},
                                  {0.277778, 1.000000, 0.621371, 0.539957},
                                  {0.447040, 1.609344, 1.000000, 0.868976},
                                  {0.514444, 1.852000, 1.150779, 1.000000}};
static char unidade[4][5] = {"m/s", "km/h", "mph", "kn"};
static char mensagem[2][39] = {"Digite a opcao da unidade de entrada: ",
                                "Digite a opcao da unidade de saida: "};

char lerOpcao(char *msg, char limite1, char limite2);
void converterVelocidade();

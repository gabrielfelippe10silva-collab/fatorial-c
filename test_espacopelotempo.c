#include <stdio.h>
 test_#include <stdio.h>

float calcularEspaco(float velocidade, float tempo, float aceleracao, int possuiAceleracao);
#include "function_espacopelotempo.c"

int main() {
    printf("Sem aceleração: %.2f\n", calcularEspaco(80, 2, 0, 0));
    printf("Sem aceleração: %.2f\n", calcularEspaco(40, 2, 0, 0));
    printf("Com aceleração: %.2f\n", calcularEspaco(40, 2, 3, 1));

    printf("Criado por [gabriel]");

    return 0;
}
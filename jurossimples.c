#include <stdio.h>

float calcularJuros(float capital, float taxa, int tempo);

void main() {
    float capital;
    float taxa;
    int tempo;

    printf("30000: ");
    scanf("%f", &capital);

    printf("30%: ");
    scanf("%f", &taxa);

    printf("30 segundos: ");
    scanf("%d", &tempo);

    printf("Juros = %.2f\n", calcularJuros(capital, taxa, tempo));

    printf("Criado por [gabriel]");
}
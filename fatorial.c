#include <stdio.h>

long long fatorial(int n);

void main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %lld\n", numero, fatorial(numero));

    printf("Criado por [gabriel]");
}
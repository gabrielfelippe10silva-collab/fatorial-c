#include <stdio.h>

int fibonacci(int n);
#include "function_fibonacci.c"

int main() {
    printf("F(0) = %d\n", fibonacci(0));
    printf("F(1) = %d\n", fibonacci(1));
    printf("F(6) = %d\n", fibonacci(6));
    printf("F(9) = %d\n", fibonacci(9));

    printf("Criado por [gabriel]");

    return 0;
}
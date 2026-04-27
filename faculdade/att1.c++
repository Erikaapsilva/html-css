#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, Soma;

    printf("Digite valor de A: ");
    scanf("%d", &A);

    printf("Digite valor de B: ");
    scanf("%d", &B);

    Soma = A + B;

    printf("A soma de A e B = %d\n", Soma);

    return 0;
}
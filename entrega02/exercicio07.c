#include <stdio.h>
#include <string.h>

int main()
{
    int numero;
    char parOuImpar[8];

    printf("É par ou ímpar?");

    printf("Digite um número para verificar se o mesmo é par ou ímpar\nNúmero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        strcpy(parOuImpar, "par");
    }
    else
    {
        strcpy(parOuImpar, "ímpar");
    }

    printf("%d é %s.\n", numero, parOuImpar);

    return 1;
}
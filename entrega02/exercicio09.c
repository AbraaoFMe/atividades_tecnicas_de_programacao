#include <stdio.h>
#include <string.h>

int main()
{
    char opcao;
    float numero1, numero2, resultado;

    printf("Super calculadora!\n");

    printf("Opções disponíveis:\n");
    printf("\t+ adição\n");
    printf("\t- subtração\n");
    printf("\t* multiplicação\n");
    printf("\t/ divisão\n");

    printf("Digite a opção escolhida: ");
    scanf("%c", &opcao);

    printf("\n");

    if (!strchr("+-/*", opcao))
    {
        printf("Opção inválida!\n");
        return 1;
    }

    printf("Digite agora dois números!\n");
    printf(" a %c b\n", opcao);

    printf("Número 1: ");
    scanf("%f", &numero1);

    printf("Número 2: ");
    scanf("%f", &numero2);

    printf("\n");

    switch (opcao)
    {
    case '+':
        resultado = numero1 + numero2;
        break;
    case '-':
        resultado = numero1 - numero2;
        break;
    case '*':
        resultado = numero1 * numero2;
        break;
    case '/':
        if (numero2 == 0)
        {
            printf("Divisão por zero!\n");
            printf("Opção inválida!\n");
            return 1;
        }

        resultado = numero1 / numero2;
        break;
    default:
        break;
    }

    printf("Resultado da operação: \n");
    printf("%.2f %c %.2f = %.2f\n", numero1, opcao, numero2, resultado);

    return 0;
}
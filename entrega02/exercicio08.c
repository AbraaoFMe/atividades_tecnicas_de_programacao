#include <stdio.h>
#include <string.h>

int main()
{
    int opcao;
    float litros, precoTotal;
    char combustiveis[2][10] = {"Gasolina", "Álcool"};
    float precosCombustiveis[2] = {5.90, 4.50};

    printf("Calculadora de combustível\n");

    for (int i = 0; i < 2; i++)
    {
        printf("%s: R$ %.2f\n", combustiveis[i], precosCombustiveis[i]);
    }

    printf("\n");

    printf("Escolha o tipo de combustível que deseja abastecer. \n");
    printf("Digite:\n");
    printf("\t1 - Gasolina\n");
    printf("\t2 - Álcool\n");
    printf("Opção desejada: ");
    scanf("%d", &opcao);

    if (opcao != 1 && opcao != 2)
    {
        printf("Opção de Combustível inválida!\n");
        return 1;
    }

    opcao = opcao - 1;

    printf("\n");

    printf("Digite quantos litros deseja abastecer: ");
    scanf("%f", &litros);

    printf("\n");

    precoTotal = precosCombustiveis[opcao] * litros;

    printf("Preço Combustível: R$ %.2f\n", precosCombustiveis[opcao]);
    printf("Litros: %.3f\n", litros);
    printf("Total: R$ %.2f\n", precoTotal);

    return 0;
}
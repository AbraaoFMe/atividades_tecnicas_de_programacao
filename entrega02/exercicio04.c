#include <stdio.h>

void imprimeCardapio(char cardapio[][20], int sizeCardapio)
{

    printf("\nCardápio:\n");
    printf("---------------------------------\n");
    printf("| %-6s | %-20s |\n", "Número", "Item");
    printf("---------------------------------\n");

    for (int i = 0; i < sizeCardapio; i++)
    {
        printf("| %-6d | %-20s |\n", i + 1, cardapio[i]);
    }

    printf("---------------------------------\n");
}

void serveBebida(char bebida[])
{
    printf("Opção Disponível\n");
    printf("Servindo %s!\n", bebida);
}

int main()
{
    char cardapio[5][20] = {"cha", "cafe expresso", "agua", "cafe descafeinado", "suco"};
    int sizeCardapio = sizeof(cardapio) / sizeof(cardapio[0]);
    int opcao;

    printf("Garçon Inteligente!\n");

    imprimeCardapio(cardapio, sizeCardapio);

    printf("Escolha a opção desejada e digite o número a seguir.\n");
    printf("Opção desejada: ");
    scanf("%d", &opcao);
    printf("\n");
    
    switch (opcao)
    {
    case 1:
        serveBebida(cardapio[0]);
        break;
    case 2:
        serveBebida(cardapio[1]);
        break;
    case 3:
        serveBebida(cardapio[2]);
        break;
    case 4:
        serveBebida(cardapio[3]);
        break;
    case 5:
        serveBebida(cardapio[4]);
        break;
    default:
        printf("Opção escolhida não consta no cardápio\n");
    }
}

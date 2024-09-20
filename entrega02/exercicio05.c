#include <stdio.h>

int main()
{
    char mencao;

    printf("Conversor de menções!\n");

    printf("Digite a menção recebida: ");
    scanf("%c", &mencao);
    printf("\n");

    switch (mencao)
    {
    case 'a':
    case 'A':
        printf("Parabéns. Você tirou entre 9 e 10 pontos na atividade.");
        break;
    case 'b':
    case 'B':
        printf("Muito bem. Você tirou entre 6 e 8 pontos na atividade.");
        break;
    case 'c':
    case 'C':
        printf("Dá pra melhorar. Você tirou entre 4 e 5 pontos.");
        break;

    case 'd':
    case 'D':
        printf("Poxa, sua nota não condiz com sua capacidade!");
        break;
    default:
        printf("Valor de menção inválido!");
        break;
    }

    printf("\n");

    return 0;
}
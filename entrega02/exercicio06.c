#include <stdio.h>

int main() {
    float salarioAtual, bonus;
    int tempoServico, porcentagemBonus;

    printf("Calculadora de bÔnus por tempo de trabalho!\n");

    printf("Digite o seu salário: R$");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de serviço em anos: ");
    scanf("%d", &tempoServico);

    porcentagemBonus = tempoServico >= 5 ? 20 : 10;

    bonus = salarioAtual * porcentagemBonus/100;

    printf("Bônus a ser recebido de R$ %.2f, referente à %d%% do seu salário atual\n", bonus, porcentagemBonus);
    
    return 1;
}
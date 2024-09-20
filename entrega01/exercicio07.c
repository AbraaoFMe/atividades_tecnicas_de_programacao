#include <stdio.h>

int main() {

    float lado, area;

    printf("Calculadora de área do quadrado.\n");

    printf("Digite o comprimento do lado do quadrado: (cm) ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("Área do quadrado: %.2f cm²\n", area);

    return 0;
}
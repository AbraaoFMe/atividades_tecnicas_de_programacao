#include <stdio.h>

int main() {

    float nota01, nota02, nota03, media;

    printf("Calculadora de média final\n");

    printf("Nota 1: ");
    scanf("%f", &nota01);

    printf("Nota 2: ");
    scanf("%f", &nota02);

    printf("Nota 3: ");
    scanf("%f", &nota03);

    media = (nota01 + nota02 + nota03) / 3;

    printf("Média: %.2f\n", media);

    return 0;
}
#include <stdio.h>

int main() {

    int numero_cavalos, numero_ferraduras;

    printf("Calculadora de ferraduras\n");

    printf("Quantos cavalos foram comprados: ");
    scanf("%d", &numero_cavalos);

    numero_ferraduras = numero_cavalos * 4;

    printf("Para %d cavalos será necessário comprar %d ferraduras.\n", numero_cavalos, numero_ferraduras);

    return 0;
}
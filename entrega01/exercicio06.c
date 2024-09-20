#include <stdio.h>

int main() {

    float peso, peso_menos_20, peso_mais_15;

    printf("Digite o seu peso: (Kg) ");
    scanf("%f", &peso);

    peso_mais_15 = peso * 1.15;
    peso_menos_20 = peso * 0.8;

    printf("Peso atual: %.2f Kg\n", peso);
    printf("Peso atual + 15%%: %.2f Kg\n", peso_mais_15);
    printf("Peso atual - 20%%: %.2f Kg\n", peso_menos_20);

    return 0;
}
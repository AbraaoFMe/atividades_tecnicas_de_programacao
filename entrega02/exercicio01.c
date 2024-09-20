#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite a seguir dois números para serem comparados\n");

    printf("Valor 1: ");
    scanf("%d", &valor1);

    printf("Valor 2: ");
    scanf("%d", &valor2);

    if(valor1 > valor2) {
        printf("O maior número é %d\n", valor1);
        printf("O menor número é %d\n", valor2);
    } else if(valor2 > valor1) {
        printf("O maior número é %d\n", valor2);
        printf("O menor número é %d\n", valor1);
    } else {
        printf("Os dois valores são iguais.\n");
    }

    return 0;
}
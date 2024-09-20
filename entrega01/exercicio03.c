#include <stdio.h>

int main() {

    int number, predecessor, sucessor;

    printf("Digite um número: ");
    scanf("%d", &number);

    predecessor = number - 1;
    sucessor = number + 1;

    printf("O número que você digitou é: %d\n", number);
    printf("Sucessor: %d\n", sucessor);
    printf("Antecessor: %d\n", predecessor);

    return 0;
}
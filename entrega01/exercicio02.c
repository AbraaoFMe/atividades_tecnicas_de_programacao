#include <stdio.h>

int main() {

    int number, double_number;
    float half_number;

    printf("Digite um número: ");
    scanf("%d", &number);

    half_number = number / 2.0;
    double_number = number * 2;

    printf("O número que você digitou é: %d\n", number);
    printf("A metade do número que você digitou é: %.1f\n", half_number);
    printf("O dobro do número que você digitou é: %d\n", double_number);

    return 0;
}
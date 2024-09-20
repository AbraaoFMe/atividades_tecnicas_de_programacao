#include <stdio.h>
#include <stdbool.h>

int main() {
    int valor;

    printf("Digite um número para verificar se o mesmo se encontra dentro do intervalo de 1 a 100.\n");

    printf("Valor: ");
    scanf("%d", &valor);

    bool inRange = (valor >= 1 && valor <= 100);

    printf("%d %s no intervalo de 1 a 100.\n", valor, inRange ? "está" : "não está");

    return 0;
}
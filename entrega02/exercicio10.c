#include <stdio.h>
#include <stdbool.h>

bool isTriangle(float a, float b, float c)
{
    float sumA, sumB, sumC;

    sumA = b + c;
    sumB = a + c;
    sumC = a + b;

    if (a >= sumA || b >= sumB || c >= sumC)
    {
        return false;
    }

    return true;
}

const char *triangleType(float a, float b, float c)
{
    if (a == b && b == c)
    {
        return "Equilátero";
    }
    else if (a == b || b == c || c == a)
    {
        return "Isóceles";
    }
    else
    {
        return "Escaleno";
    }
}

int main()
{
    float lado1, lado2, lado3;
    const char *tipoTriangulo;

    printf("Classificador de Triângulos!\n");
    printf("Digite o comprimento dos três lados de um triângulo para verificar a condição de existência e classificar em equilátero, isóceles ou escaleno.\n");

    printf("\n");

    printf("Lado 1: ");
    scanf("%f", &lado1);

    printf("Lado 2: ");
    scanf("%f", &lado2);

    printf("Lado 3: ");
    scanf("%f", &lado3);

    if (!isTriangle(lado1, lado2, lado3))
    {
        printf("Comprimentos fornecidas não satisfazem as condiçoes de existência de um triângulo.\n");
        return 1;
    }

    tipoTriangulo = triangleType(lado1, lado2, lado3);

    printf("Se trata de um triângulo do tipo %s\n", tipoTriangulo);

    return 0;
}
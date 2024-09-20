#include <stdio.h>
#include <string.h>

int main() {
    printf("Filtro de aprovação!\n");

    float nota;
    
    printf("Nota: ");
    scanf("%f", &nota);

    if(nota < 0 || nota > 10) {
        printf("Valor fora do intervalo!\n");
        return 1;
    }

    char status[15];

    if(nota <= 2.9) {
        strcpy(status, "REPROVADO");
    } else if (nota <= 5.9 ) {
        strcpy(status, "RECUPERAÇÃO");
    } else {
        strcpy(status, "APROVADO");
    }    

    printf("Status: %s\n", status);

    return 0;
}
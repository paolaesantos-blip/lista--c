#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float peso1, peso2;

    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);

    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);

    if (peso1 > peso2) {
        printf("A primeira pessoa e mais pesada (%.2f kg > %.2f kg).\n", peso1, peso2);
    } 
    else if (peso2 > peso1) {
        printf("A segunda pessoa e mais pesada (%.2f kg > %.2f kg).\n", peso2, peso1);
    }
    else {
        printf("Os dois pesos sao iguais (%.2f kg).\n", peso1);
    }

    system("pause");
    return 0;
}
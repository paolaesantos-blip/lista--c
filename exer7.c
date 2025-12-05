#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float dobro (float x){
    return x * 2;
}

int main() {

    float valor, resultado;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    resultado = dobro(valor);

    printf("O dobro de %.2f é: %.2f\n", valor, resultado);

    system("pause");
    return 0;
}
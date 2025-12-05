#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float altura1, altura2, altura3, media;

    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &altura1);

    printf("Digite a altura da segunda pessoa: ");
    scanf("%f", &altura2);

    printf("Digite a altura da terceira pessoa: ");
    scanf("%f", &altura3);

    media = (altura1 + altura2 + altura3) / 3;

    printf("A média das alturas é: %.2f\n", media);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6; 

    printf("A velocidade em m/s é: %.2f\n", ms);

    return 0;
}
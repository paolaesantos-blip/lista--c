#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media das notas e: %.2f\n", media);

    if (media >= 7) {
        printf("Aluno APROVADO!\n");
    } else {
        printf("Aluno REPROVADO!\n");
    }

    system("pause");
    return 0;
}
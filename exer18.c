 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

    int main() {
    int idade;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    if (idade >= 0 &idade <= 12) {
        printf("Criança.\n");
    } else if (idade >= 13 &idade <= 17) {
        printf("Adolescente.\n");
    } else if (idade >= 18 &idade <= 59) {
        printf("Adulto.\n");
    } else if (idade >= 60) {
        printf("Idoso.\n");
    } else {
        printf("Idade invalida.\n");
    }

    return 0;
}
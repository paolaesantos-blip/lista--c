 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

    int main() {
    float nota;

    printf("Digite uma nota de 0 a 10: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Erro: nota invalida!\n");
    } else {
        printf("A nota informada foi: %.1f\n", nota);
    }

    return 0;
}
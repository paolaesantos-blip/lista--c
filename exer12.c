 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

    int main() {
    int a, b, c, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    printf("O maior valor e: %d\n", maior);

    system("pause");
    return 0;
}
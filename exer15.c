 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

    int quadrado(int x) {
    return x * x;
}

   int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O quadrado de %d e: %d\n", n, quadrado(n));

    system("pause");
    return 0;
}
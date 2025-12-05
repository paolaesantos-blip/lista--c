 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
    int main() {
    int N;
    int soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 até %d é: %d\n", N, soma);

    return 0;
}
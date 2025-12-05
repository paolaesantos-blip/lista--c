 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
    
    int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    system("pause");
    return 0;
}
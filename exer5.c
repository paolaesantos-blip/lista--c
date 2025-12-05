#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    char nome[50];
    char cidade[50];

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite a cidade onde voce mora: ");
    fgets(cidade, 50, stdin);

    printf("\n%s mora na cidade de %s\n", nome, cidade);

    system("pause");
    return 0;
}
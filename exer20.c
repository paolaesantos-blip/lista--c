#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main() {
    char nome[100];
    int i, contador = 0;

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);  

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ' && nome[i] != '\n') {  
            contador++; 
        }
    }

    printf("Seu nome tem %d letras (sem contar espacos).\n", contador);

    system("pause");
    return 0;
}
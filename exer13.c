 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

    int main() {
    int n, i;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    system("pause");
    return 0;
}
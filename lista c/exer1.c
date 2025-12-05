 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
int main() {
    float horas, minutos;

    printf("Digite a hora: ");
    scanf("%f", &horas);

    minutos = horas * 60;

    printf("%.2f horas equivalem a %.2f minutos.\n", horas, minutos);

    return 0;
}
  
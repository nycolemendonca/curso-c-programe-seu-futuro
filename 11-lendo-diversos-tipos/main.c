#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, peso;
    float altura;

    printf("Informe seu sexo (M ou F): ");
    sexo = getchar();

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu peso (em kg): ");
    scanf("%d", &peso);

    printf("Informe sua altura (em m): ");
    scanf("%f", &altura);

    printf("\n\nSexo: %c\n", sexo);
    printf("Idade: %d anos\n", idade);
    printf("Peso: %d kg\n", peso);
    printf("Altura: %.2f m\n\n", altura);


    return 0;
}

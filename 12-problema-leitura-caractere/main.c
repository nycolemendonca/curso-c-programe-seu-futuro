#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe seu sexo (M ou F): ");
    scanf(" %c", &sexo); // um espaco a mais em %c garante a leitura do caractere

    printf("\n\nIdade: %d \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);

    return 0;
}

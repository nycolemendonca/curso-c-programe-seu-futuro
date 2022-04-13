#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo = 'k';

    printf("Valor da variavel: %c\n\n", sexo);

    printf("Digite seu sexo (M/F): ");
    scanf("%c", &sexo);
    printf("Valor da variavel sexo: %c\n", sexo);

    return 0;
}

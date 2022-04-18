#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b); // o espaco entre %c[]%c garante a leitura
    printf("Letras digitadas: %c - %c", a, b);


    return 0;
}

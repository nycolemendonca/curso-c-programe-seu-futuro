#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite um caractere: ");
    letra = fgetc(stdin); // fgetc() le arquivos em geral

    printf("Caractere lido: %c\n", letra);

    return 0;
}

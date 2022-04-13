#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite uma letra: ");
    letra = getchar(); // le o caractere e o retorna
    printf("Letra digitada: %c\n", letra);

    return 0;
}

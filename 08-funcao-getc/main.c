#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite um caractere: ");
    letra = getc(stdin); // na funcao getc() eh preciso informar de onde ela vai ler a informacao, pois ela le de varias fontes
    // stdin = diz a funcao getc() que a informacaos era lida da entrada padrao da maquina (teclado)

    printf("Caractere lido: %c\n", letra);

    return 0;
}

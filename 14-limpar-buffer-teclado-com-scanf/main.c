#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    printf("Digite outra letra: ");
    scanf(" %c", &b); // espaco

    printf("\nPrimeira letra: %c \nSegunda letra: %c\n", a, b);


    return 0;
}

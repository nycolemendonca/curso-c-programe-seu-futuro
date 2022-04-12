#include <stdio.h>
#include <stdlib.h>

// AULA 4 - LENDO NUMEROS INTEIROS

int main()
{

    int valor1, valor2; // esta variavel armazenara um tipo inteiro

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1); // le e armazena a informacao na variavel valor1
    printf("Primeiro valor lido: %d\n\n", valor1); // valor = nome da variavel que quero imprimir

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    printf("Segundo valor lido: %d\n", valor2);

    return 0;
}

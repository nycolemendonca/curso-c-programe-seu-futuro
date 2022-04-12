#include <iostream>

using namespace std;

int main()
{
    // o float sempre eh exibido com 6 casas apos a virgula
    float numeroReal = 3.1415, novoNumeroDecimal;

    printf("Valor da variavel: %f\n", numeroReal); // 6 casas decimais
    printf("Valor da variavel: %.4f\n\n", numeroReal); // 4 casas decimais

    printf("Entre com um numero real: ");
    scanf("%f", &novoNumeroDecimal);
    printf("Numero digitado: %f", novoNumeroDecimal);

    return 0;
}

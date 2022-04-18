#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 1.0;

    printf("Tamanho em memoria - int: %d bytes", sizeof(int)); // 4 bytes * 8 = 32 bits
    printf("\nTamanho em memoria - float: %d bytes", sizeof x); // 4 bytes * 8 = 32 bits


    return 0;
}

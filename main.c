#include "header.h"

int main()
{
    int numero, fibo;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    fibo = fibonacci(numero);
    if(fibo == EXISTE)
    {
        printf("El numero existe en la serie fibonacci");
    }else
    {
        printf("El numero no existe en la serie fibonacci");
    }
    return 0;
}

#include "header.h"

int fibonacci(int numero)
{
    int i = 1, fibo = 1, x=0 ,y=1;
    int existe = NO_EXISTE;
    while(existe == NO_EXISTE && i <= numero)
    {
        fibo = x + y;
        x = y;
        y = fibo;
        if(fibo == numero)
        {
            existe = EXISTE;
        }else if(fibo > numero)
        {
            i = numero;
        }
        i++;
    }
    return existe;
}

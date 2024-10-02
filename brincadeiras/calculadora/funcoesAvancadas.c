#include "funcoesAvancadas.h"
#include <stdio.h>

int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fatorial(n - 1);
}

int exponencial(int n, int expo)
{

    if (expo == 0)
    {
        return 0;
    }

    return n * exponencial(n, expo - 1);
}

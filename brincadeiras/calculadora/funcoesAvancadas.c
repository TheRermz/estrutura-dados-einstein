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

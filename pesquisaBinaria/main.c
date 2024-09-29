#include <stdio.h>

int pesquisaBinaria(int lista[10], int entrada)
{
    int baixo = 0, alto = sizeof(lista) - 1;

    while (baixo <= alto)
    {
        int meio = (baixo + alto) / 2;
        int chute = lista[meio];

        if (chute == entrada)
        {
            return meio;
        }
        else if (chute > entrada)
        {
            alto = meio - 1;
        }
        else
        {
            baixo = meio + 1;
        }
    }
    return 1;
}

int main()
{
    int lista[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", pesquisaBinaria(lista, 1));
    return 0;
}

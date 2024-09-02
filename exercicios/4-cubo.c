#include <stdio.h>
#include <math.h>

float cubo(int valor)
{

    float valCubo;
    valCubo = pow(valor, 3);
    return valCubo;
}

int main()
{
    float valor, valCubo;
    int index = 0;

    while (index < 10)
    {
        printf("Insira o valor para eleva-lo ao cubo\n");
        scanf("%f", &valor);

        valCubo = cubo(valor);
        printf("%.2f\n", valCubo);
    }
}

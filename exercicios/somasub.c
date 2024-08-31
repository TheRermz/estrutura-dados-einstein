#include <stdio.h>

float soma(float v1, float v2)
{
    float soma;
    soma = v1 + v2;
    return soma;
}

float subtracao(float v1, float v2)
{
    float subtracao;
    subtracao = v1 - v2;
    return subtracao;
}

float multiplicacao(float v1, float v2)
{
    float multiplicacao;
    multiplicacao = v1 * v2;
    return multiplicacao;
}

float divisao(float v1, float v2)
{
    float divisao;
    divisao = v1 / v2;
    return divisao;
}

int main()
{
    float v1, v2;
    int op;
    printf("Ola!! Insira dois valorers\n");

    scanf("%f %f", &v1, &v2);

    printf("Otimo! Agora insira o tipo de operacao:\n1- soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
        float retornaSoma;
        retornaSoma = soma(v1, v2);
        printf("%f\n", retornaSoma);
        break;
    case 2:
        float retornaSub;
        retornaSub = subtracao(v1, v2);
        printf("%f\n", retornaSub);
        break;

    case 3:
        float retornaMult;
        retornaMult = multiplicacao(v1, v2);
        printf("%f\n", retornaMult);
        break;

    case 4:
        float retornaDiv;
        retornaDiv = divisao(v1, v2);
        printf("%f\n", retornaDiv);
        break;

    default:
        printf("Digitou errado, tente novamente!!");
    }
}

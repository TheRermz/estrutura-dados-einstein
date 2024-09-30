#include "funcoesBasicas.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 25

float defineV(int op, float primeiroValor)
{
    float v;
    if (op == 1)
    {
        return v = 0;
    }
    else if (op == 2 || op == 4)
    {
        return v = primeiroValor;
    }
    else
    {
        return v = 1;
    }
}

float fazCalculo(int operacao, int num_args, float *arr)
{

    float v = defineV(operacao, arr[0]);
    for (int i = (operacao == 2 || operacao == 4) ? 1 : 0; i < num_args; i++)
    {
        double proxValor = arr[i];
        switch (operacao)
        {
        case 1:
            v += proxValor;
            break;
        case 2:
            v -= proxValor;
            break;
        case 3:
            v *= proxValor;
            break;
        case 4:
            v /= proxValor;
            break;

        default:
            printf("Você não selecionou uma operacao valida, finalizando o programa!\n");
            exit(1);
            ;
            break;
        }
    }
    return v;
}

int recebeNumArgs()
{
    int num_args;
    printf("Digite quantos argumentos deseja receber (Maximo permitido: %d):\n", MAX);
    scanf("%d", &num_args);

    if (num_args < 1)
    {
        printf("Numero de argumentos invalido, tente novamente\n");
        exit(1);
    }

    if (num_args >= MAX)
    {
        printf("Voce excedeu o numero total de argumentos. Maximo permitido: %d\n", MAX);
        exit(1);
    }
    else if (num_args == 1)
    {
        printf("Numero minimo de argumentos e 2.\n");
        exit(1);
    }

    return num_args;
}

float *recebeArgs(int num_args)
{
    float *args;
    int i = 0;
    args = (float *)malloc(num_args * sizeof(float));

    if (args == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    while (i < num_args)
    {
        printf("Insira o valor %d\n", i + 1);
        if (scanf("%f", &args[i]) != 1)
        {
            printf("Insira um valor valido!\n");
            free(args);
            exit(1);
        }
        i++;
    }
    return args;
}

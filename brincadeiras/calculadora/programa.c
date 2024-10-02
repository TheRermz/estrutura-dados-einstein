#include "programa.h"
#include "funcoesBasicas.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void executaPrograma()
{
    printf("Bem vindo a calculadora!");
    while (true)
    {
        int op = selecionaOperacao();
        char *tipo;
        switch (op)
        {
        case 1:
            tipo = "soma";
            break;
        case 2:
            tipo = "subtracao";
            break;
        case 3:
            tipo = "multiplicacao";
            break;
        case 4:
            tipo = "divisao";
            break;
        case 5:
            tipo = "fatorial";
            break;
        case 6:
            tipo = "exponencial";
            break;

        default:
            break;
        }
        int num_args = recebeNumArgs();
        float *args = recebeArgs(num_args);
        switch (op)
        {
        case 1, 2, 3, 4:
            float calculo = fazCalculo(op, num_args, args);
            printf("A %s dos valores digitados acima e: %.2f.\n", tipo, calculo);
            break;
        default:
            break;
        }
    }
}

int selecionaOperacao()
{
    int op;
    printf("Selecione a operacao!\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Fatorial\n6-Exponencial\n0-Parar\n");
    scanf("%d", &op);
    if (op == 0)
    {
        printf("Finalizando o programa\n");
        exit(1);
    }
    return op;
}

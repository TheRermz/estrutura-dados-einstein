// 9) Faça um programa que receba um valor que foi depositado e exiba o valor com rendimento após um mês. Considere fixo o juro da poupança em 0,70% a.m.

#include <stdio.h>

float calculaJuro(float valorInicial)
{
    float rendimento;
    rendimento = valorInicial * 0.007;
    return rendimento;
}

int main()
{
    float valorDepositado, res;
    printf("Insira o valor depositado:\n");
    scanf("%f", &valorDepositado);

    res = valorDepositado + calculaJuro(valorDepositado);
    printf("O valor depositado apos um mes sera: R$%.2f\n", res);
}

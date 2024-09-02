//  7) Escreva um programa em C que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final do mês.

#include <stdio.h>

float calculoComissao(float vendas, float salario)
{
    float comissao;
    comissao = salario + (vendas * 0.15);
    return comissao;
}

int main()
{
    float vendas, salario, res;
    char nome[50];

    printf("Por favor digite seu nome\n");
    scanf("%s", nome);
    printf("Maravilha! Agora digite seu salario:\n");
    scanf("%f", &salario);
    printf("Agora digite o total, em dinheiro, de vendas:\n");
    scanf("%f", &vendas);

    res = calculoComissao(vendas, salario);

    printf("%s, seu salario e de R$%.2f e você recebeu nesse mes um total de R$%.2f\n", nome, salario, res);
}

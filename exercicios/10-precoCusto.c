// 10) Faça um programa que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.

#include <stdio.h>

float calculaPrecoVenda(float precoCusto, float perAcrescimo)
{
    float precoVenda;
    precoVenda = precoCusto + (precoCusto * (perAcrescimo / 100));
    return precoVenda;
}

int main()
{
    float precoCusto, perAcrescimo, res;
    printf("Insira o preco de custo do produto\n");
    scanf("%f", &precoCusto);
    printf("Agora insira o percentual de acrescimo\n");
    scanf("%f", &perAcrescimo);

    res = calculaPrecoVenda(precoCusto, perAcrescimo);
    printf("O preco de venda sera: R$%.2f\n", res);
}

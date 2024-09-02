// 11) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um programa que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.

#include <stdio.h>

float calculaValorConsumidor(float valorFabrica)
{
    float valorConsumidor;
    valorConsumidor = (valorFabrica * 0.45) + (valorFabrica * 0.28) + valorFabrica;
    return valorConsumidor;
}

int main()
{
    float valorFabrica, res;
    printf("Insira o valor de fabrica do veiculo:\n");
    scanf("%f", &valorFabrica);

    res = calculaValorConsumidor(valorFabrica);

    printf("O veiculo tem o valor de R$%.2f\n", res);
}

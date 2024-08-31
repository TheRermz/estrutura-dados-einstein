#include <stdio.h>

float calculaConsumo(float distancia, float combustivel)
{
    float consumo = (distancia / combustivel);
    return consumo;
}

int main()
{
    float distancia, combustivel;

    printf("Boas!! Insira a distancia percorrida!!\n");
    scanf("%f", &distancia);

    printf("Muito bem! Agora insira quanto de combustivel voce consumiu!\n");
    scanf("%f", &combustivel);

    float consumo = calculaConsumo(distancia, combustivel);

    printf("%.2f\n", consumo);
}

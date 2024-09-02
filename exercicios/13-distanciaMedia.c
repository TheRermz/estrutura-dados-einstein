// 13) Dois carros percorreram diferentes distâncias em diferentes tempos. Sabendo que a velocidade média é a razão entre a distância percorrida e o tempo levado para percorrê-la, faça um programa que leia as distâncias que cada carro percorreu e o tempo que cada um levou, e indique o carro que teve maior velocidade média (ou se as  velocidades são iguais).

#include <stdio.h>

int calculaVMedia(int distancia, int tempo)
{
    int VMedia;
    VMedia = distancia / tempo;
    return VMedia;
}

int comparaVMedia(int VMedia1, int VMedia2)
{
    if (VMedia1 > VMedia2)
    {
        return 2;
    }
    else if (VMedia1 == VMedia2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int distancia1, tempo1, distancia2, tempo2, VMedia1, VMedia2, res;
    printf("Insira a distancia percorrida pelo primeiro veiculo:\n");
    scanf("%i", &distancia1);
    printf("Agora insira o tempo percorrido pelo primeiro veiculo:\n ");
    scanf("%i", &tempo1);

    printf("Muito bem! Insira a distancia percorrida pelo segundo veiculo:\n");
    scanf("%i", &distancia2);
    printf("Agora diga o tempo percorrido pelo segundo veiculo:\n");
    scanf("%i", &tempo2);

    VMedia1 = calculaVMedia(distancia1, tempo1);
    VMedia2 = calculaVMedia(distancia2, tempo2);

    res = comparaVMedia(VMedia1, VMedia2);

    if (res == 2)
    {
        printf("A velocidade 1 e maior que a velocidade 2\n");
    }
    else if (res == 1)
    {
        printf("As velocidades sao iguais!\n");
    }
    else
    {
        printf("A velocidade 2 e maior que a velocidade 1\n");
    }
}

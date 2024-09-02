// 19) João tem 1,45 m de altura e Maria tem 1,57. João cresce 0,23m por ano enquanto Maria cresce 0,15m. Faça um algoritmo que mostre as alturas de João e Maria, ano a ano, até que João seja maior que Maria, respondendo no final quantos anos serão necessários para que João seja o mais alto dos dois.

#include <stdio.h>

int main()
{
    float tamJoao = 1.45, tamMaria = 1.57, crescimentoAnoJoao = 0.23, crescimentoAnoMaria = 0.15;
    int index = 1;

    do
    {
        tamJoao = tamJoao + crescimentoAnoJoao;
        printf("Joao: Ano %i, altura %.2f\n", index, tamJoao);
        tamMaria = tamMaria + crescimentoAnoMaria;
        printf("Maria: Ano %i, altura %.2f\n", index, tamMaria);
        index++;

    } while (tamJoao < tamMaria);

    printf("Joao maior que Maria em %i anos\n", index);
}

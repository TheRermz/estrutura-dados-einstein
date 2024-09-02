// 12) Faça um programa que receba um número e diga se este número está no intervalo entre 100 e 200

#include <stdio.h>

int numPertence(int num)
{
    if (num >= 100 && num <= 200)
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
    int num, res;
    printf("Insira um numero e lhe direi se esta entre 100 e 200\n");
    scanf("%i", &num);

    res = numPertence(num);

    if (res == 1)
    {
        printf("O numero esta ente 100 e 200\n");
    }
    else
    {
        printf("O numero nao esta entre 100 e 200\n");
    }
}

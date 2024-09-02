// 16) A partir do exercício anterior, pergunte ao usuário se deseja os numerais em inglês ou português.

#include <stdio.h>

int main()
{
    int num, lingua;

    printf("Por favor insira um numero de 0 a 5:\n");
    scanf("%i", &num);
    printf("Por favor escolha a lingua: \n1-Portugues\n2-Ingles\n");
    scanf("%i", &lingua);

    if(lingua == 1)
    {
        if(num == 5)
        {
            printf("Cinco\n");
        }
        else if(num == 4)
        {
            printf("Quatro\n");
        }
        else if(num == 3)
        {
            printf("Tres\n");
        }
        else if(num == 2)
        {
            printf("Dois\n");
        }
        else if(num == 1)
        {
            printf("Um\n");
        }
        else if(num == 0)
        {
            printf("zero\n");
        }
        else
        {
            printf("Numero nao esta entre 0 e 5\n");
        }
    }else if(lingua == 2)
    {
        if(num == 5)
        {
            printf("Five\n");
        }
        else if(num == 4)
        {
            printf("Four\n");
        }
        else if(num == 3)
        {
            printf("Three\n");
        }
        else if(num == 2)
        {
            printf("Two\n");
        }
        else if(num == 1)
        {
            printf("One\n");
        }
        else if(num == 0)
        {
            printf("zero\n");
        }
        else
        {
            printf("Number isn't between 0 and 5\n");
        }
    }

    
}
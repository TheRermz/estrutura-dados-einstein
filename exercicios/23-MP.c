// 23) Faça um algoritmo que leia as três notas de 5 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10. Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.

#include <stdio.h>

float calculaMediaPonderada(float nota1, float nota2, float nota3)
{
    float mediaPonderada;
    mediaPonderada = (nota1 + nota2 + nota3) / 10;
    return mediaPonderada;
}

int main()
{
    float nota1, nota2, nota3, mediaGeral = 0, mediaPonderada;
    int totalAlunos = 5;

    for (int i = 0; i < totalAlunos; i++)
    {
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota:\n");
        scanf("%f", &nota3);

        mediaPonderada = calculaMediaPonderada(nota1, nota2, nota3);
        mediaGeral += mediaPonderada;

        printf("Media ponderada do aluno %i: %.2f\n", i, mediaPonderada);
        if (mediaPonderada >= 7)
        {
            printf("Aprovado\n");
        }
        else
        {
            printf("Reprovado\n");
        }
    }
    mediaGeral /= totalAlunos;
    printf("Media geral da turma: %.2f\n", mediaGeral);
}

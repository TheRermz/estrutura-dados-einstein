// 14) Em uma escola, um aluno passa direto se obtiver média final maior ou igual a 7. Se a média for inferior a 4, ele está reprovado direto, sem direito a prova final. Em outro caso, ele vai à final, e a nota que ele precisa para passar é o que falta à média final para completar 10. Faça um programa que receba as duas notas parciais, calcule a média final e informe ao aluno sua situação inclusive informando a ele quanto precisa tirar na final, se este for o seu caso.
#include<stdio.h>
float confereMedia(float nota1, float nota2)
{
    float media;
    media = (nota1+nota2)/2;
    return media;
}

int confereStatusAluno(float media)
{
    if(media >= 7)
    {
        return 2;
    }
    else if(media >= 4)
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
    float nota1, nota2, media, final;
    int status;
    printf("Ola!Insira a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Muito bem, agora insira a sua segunda nota\n");
    scanf("%f", &nota2);

    media = confereMedia(nota1, nota2);
    status=confereStatusAluno(media);
    if(status ==2)
    {
        printf("Aluno aprovado\n");
    }
    else if(status == 1)
    {
        printf("Aluno nao aprovado. Fazer prova final\n");
        final = 10 - media;
        printf("Para ser aprovado o aluno precisa tirar %.2f na final\n", final);
    }
    else
    {
        printf("Aluno reprovado!\n");
    }
}
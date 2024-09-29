#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 25

float imc(float altura, float peso)
{
    float imcCalculado = peso / pow(altura, 2);
    return imcCalculado;
}

char *respImc(float imc)
{
    if (imc <= 16.9)
    {
        return "Muito abaixo do peso"; // Retorna a string
    }
    else if (imc < 18.5)
    {
        return "Abaixo do peso";
    }
    else if (imc < 25)
    {
        return "Peso normal";
    }
    else if (imc < 30)
    {
        return "Acima do peso";
    }
    else if (imc < 35)
    {
        return "Obesidade I";
    }
    else if (imc <= 40)
    {
        return "Obesidade II";
    }
    else
    {
        return "Obesidade III";
    }
}

void limpaAlocacao(persona *p)
{
    free(p->nome);
    // não é necessário liberar o espaço de peso, altura e idade pois são variáveis estáticas, apenas nome é uma variável dinamica, por isso precisa ser limpa
    free(p);
}

persona *alocaPessoa()
{
    persona *p = (persona *)malloc(sizeof(persona));

    if (p == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    p->nome = (char *)malloc(MAX * sizeof(char));

    if (p->nome == NULL)
    {
        printf("Erro ao alocar memória para nome\n");
        free(p);
        exit(1);
    }

    return p;
}

void recebeDados(persona *p)
{
    printf("Digite seu nome (maximo %d caracteres): ", MAX - 1);
    fgets(p->nome, MAX, stdin);

    size_t len = strlen(p->nome);
    if (p->nome[len - 1] == '\n')
    {
        p->nome[len - 1] = '\0';
    }

    if (strlen(p->nome) > MAX - 1)
    {
        printf("Nome maior que a quantidade permitida: %d caracteres.\n", MAX - 1);
        printf("Finalizando o programa.\n");
        limpaAlocacao(p);
        exit(1);
    }

    printf("Digite sua idade: ");
    if (scanf("%d", &(p->idade)) != 1)
    {
        printf("Valor invalido! O programa sera encerrado.\n");
        limpaAlocacao(p);
        exit(1);
    }

    printf("Digite sua altura: ");
    if (scanf("%f", &(p->altura)) != 1)
    {
        printf("Valor invalido! O programa sera encerrado.\n");
        limpaAlocacao(p);
        exit(1);
    }

    printf("Digite seu peso: ");
    if (scanf("%f", &(p->peso)) != 1)
    {
        printf("Valor invalido! O programa sera encerrado.\n");
        limpaAlocacao(p);
        exit(1);
    }
}

void retornaDados(persona *p)
{

    float imcValor = imc(p->altura, p->peso);
    printf("Seu nome: %s\nSua idade: %d anos\nSua altura: %.2f m\nSeu peso: %.2f kg\n", p->nome, p->idade, p->altura, p->peso);
    printf("Tamanho da string: %ld\n", strlen(p->nome));
    printf("Baseado nos dados informados, seu IMC é %.2f, o que te coloca em: %s\n", imcValor, respImc(imcValor));
    printf("Ponteiro de persona (p): %p\nPonteiro de nome: %p\nPonteiro de idade: %p\n", (void *)p, (void *)&p->nome, (void *)&p->idade);
}

void executaPrograma(persona *p)
{
    p = alocaPessoa();
    recebeDados(p);
    retornaDados(p);
    limpaAlocacao(p);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25

typedef struct pessoa
{
    int idade;
    char *nome;
} spessoa;

int main(int argc, char *argv[])
{
    spessoa *p;

    p = (spessoa *)malloc(sizeof(spessoa));

    if (p == NULL)
    {
        printf("Erro\n");
        exit(1);
    }

    p->nome = (char *)malloc(MAX * sizeof(char));

    if (p->nome == NULL)
    {
        printf("Erro ao alocar memória para nome\n");
        free(p);
        exit(1);
    }

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
        printf("Finalizando o programa.");
        free(p->nome);
        free(p);
        exit(1);
    }

    printf("Digite sua idade: ");
    if (scanf("%d", &(p->idade)) != 1)
    {
        printf("Valor invalido! O programa sera encerrado.");
        free(p->nome);
        free(p);
        exit(1);
    }

    printf("Seu nome: %s\nSua idade: %d\n", p->nome, p->idade);
    printf("Tamanho da string: %ld\n", strlen(p->nome));
    printf("Ponteiro de spessoa (p): %p\nPonteiro de nome: %p\nPonteiro de idade: %p\n", (void *)p, (void *)&p->nome, (void *)&p->idade);

    free(p->nome);
    free(p);
}

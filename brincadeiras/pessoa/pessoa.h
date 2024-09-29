typedef struct novaPessoa
{
    int idade;
    char *nome;
    float altura;
    float peso;
} persona;

void recebeDados(persona *p);
persona *alocaPessoa();
void limpaAlocacao(persona *p);
float imc(float altura, float peso);
char *respImc(float imc);
void retornaDados(persona *p);
void executaPrograma(persona *p);

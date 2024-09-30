/* Faz equações básicas com n argumentos.
Funções disponíveis: Soma, subtração, multiplicação e divisão
 */
float fazCalculo(int operacao, int num_args, float *arr);
/* Define o valor de V para fazer o cálculo
Se a operação for Divisão ou subtração recebe o valor do primeiro argumento, se for soma, recebe 0 e se for multiplicação recebe 1
 */
float defineV(int op, float primeiroValor);
/* Recebe o número de argumentos que a equação vai executar */
int recebeNumArgs();
/* Recebe os argumentos para o cálculo */
float *recebeArgs(int num_args);

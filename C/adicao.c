/* Programa de adição */

#include <stdio.h> /* diretiva do pre-processador C - as linhas que começam com 
"#" são verificadas pelo pre-processador antes de o programa ser compilado */

/*função main inicia a execução do programa */
int main(void)
{

	int inteiro1; /* primeiro inteiro a ser informado pelo usuário */
	int inteiro2; /* segundo inteiro a ser informado */
	int soma;  /* soma dos dois inteiros */

	printf("Digite o primeiro inteiro\n"); /* prompt */
	scanf("%d", &inteiro1 ); /* lê um inteiro */

	printf("Digite o segundo inteiro\n" );//prompt 2
	scanf("%d", &inteiro2 );

	soma = inteiro1 + inteiro2; /*atribui o total à soma */

	printf("A soma é %d\n", soma ); /* imprime soma */

} /* fim da funcao main */

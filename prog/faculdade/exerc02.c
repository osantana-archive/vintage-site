/* Esse programa imprime "X=10" na tela seguido por uma quebra de linha
 * Comentário de alguns trechos desse programa estão em exercícios anteriores
 */

#include<stdio.h>

int main(void)
{
	int x = 10; /* declara a variável x como inteiro e já atribui o valor 10 */
	            /* para ela. Isso poderia ter sido feito de uma maneira      */
                /* diferente como: int x;                                    */
	            /*                 x = 10;                                   */
	
	printf("X=%d\n", x); /* imprime X=10 na tela. Repare nos parâmetros da   */
	/*    ^---v---^  |      função printf.                                   */
	/*        |      `- variável que tem o valor 10 e vai substituir o %d    */
	/*        |         do primeiro parâmetro passado para a função printf   */
	/*        `-------- Esse parâmetro contêm o que a função printf irá      */
	/*                  imprimir. O %d será substituido pelo valor de x e o  */
	/*                  \n irá efetuar uma quebra de linha no final da mesma */
	return 0;
}

/* Esse programa imprime "X=10" na tela seguido por uma quebra de linha
 * Coment�rio de alguns trechos desse programa est�o em exerc�cios anteriores
 */

#include<stdio.h>

int main(void)
{
	int x = 10; /* declara a vari�vel x como inteiro e j� atribui o valor 10 */
	            /* para ela. Isso poderia ter sido feito de uma maneira      */
                /* diferente como: int x;                                    */
	            /*                 x = 10;                                   */
	
	printf("X=%d\n", x); /* imprime X=10 na tela. Repare nos par�metros da   */
	/*    ^---v---^  |      fun��o printf.                                   */
	/*        |      `- vari�vel que tem o valor 10 e vai substituir o %d    */
	/*        |         do primeiro par�metro passado para a fun��o printf   */
	/*        `-------- Esse par�metro cont�m o que a fun��o printf ir�      */
	/*                  imprimir. O %d ser� substituido pelo valor de x e o  */
	/*                  \n ir� efetuar uma quebra de linha no final da mesma */
	return 0;
}

/* Esse programa pede um n�mero inteiro com 5 d�gitos para o usu�rio e imprime
 * o mesmo com 3 espa�os separando cada d�gito. Ex.:
 *
 * Entre com um n�mero inteiro (com 5 d�gitos): 12345
 * 1   2   3   4   5
 *
 * Coment�rio de alguns trechos desse programa est�o em exerc�cios anteriores
 */
#include<stdio.h>

int main(void)
{
	int x, d1, d2, d3, d4, d5;

	printf("Entre com um n�mero inteiro (com 5 d�gitos): ");
	scanf("%d",&x);

	/* Lembre das propriedades da divis�o de n�meros inteiros e os
	 * restos de divis�o.
	 */
	d5 = x % 10;
	d4 = x % 100 / 10;
	d3 = x % 1000 / 100;
	d2 = x % 10000 / 1000;
	d1 = x / 10000;

	printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
	
	return 0;
}

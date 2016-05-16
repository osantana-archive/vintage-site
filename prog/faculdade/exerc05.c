/* Esse programa pede um número inteiro com 5 dígitos para o usuário e imprime
 * o mesmo com 3 espaços separando cada dígito. Ex.:
 *
 * Entre com um número inteiro (com 5 dígitos): 12345
 * 1   2   3   4   5
 *
 * Comentário de alguns trechos desse programa estão em exercícios anteriores
 */
#include<stdio.h>

int main(void)
{
	int x, d1, d2, d3, d4, d5;

	printf("Entre com um número inteiro (com 5 dígitos): ");
	scanf("%d",&x);

	/* Lembre das propriedades da divisão de números inteiros e os
	 * restos de divisão.
	 */
	d5 = x % 10;
	d4 = x % 100 / 10;
	d3 = x % 1000 / 100;
	d2 = x % 10000 / 1000;
	d1 = x / 10000;

	printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
	
	return 0;
}

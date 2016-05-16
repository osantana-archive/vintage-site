/* Esse programa pede 2 n�meros inteiros para o usu�rio e imprime a soma,
 * produto, quociente, resto, maior e menor.
 * Coment�rio de alguns trechos desse programa est�o em exerc�cios anteriores
 */
#include<stdio.h>

int main(void)
{
	int x, y, maior, menor;

	printf("Entre com o primeiro inteiro: ");
	scanf("%d",&x);
	printf("Entre com o segundo inteiro: ");
	scanf("%d",&y);

	printf("\nA soma �: %d\n",x + y);
	printf("O produto �: %d\n",x * y);

	if (y != 0) {                    /* O segundo n�mero � diferente de zero? */
		printf("O resto �: %d\n",x % y);      /* Sim. Logo, existe resto      */
		printf("O quociente �: %d\n", x / y); /* e quociente.                 */
	} else                                    /* N�o. Imprima apenas um aviso */
		printf("N�o � poss�vel calcular o resto e o quociente de uma divis�o por 0\n");
	   	   
	maior = x;
	if (y > maior)
		maior = y;
	printf("O maior �: %d\n", maior);

	menor = x;
	if (y < menor)
		menor = y;
	printf("O menor �: %d\n", menor);

	return 0;
}

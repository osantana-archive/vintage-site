/* Esse programa pede 2 números inteiros para o usuário e imprime a soma,
 * produto, quociente, resto, maior e menor.
 * Comentário de alguns trechos desse programa estão em exercícios anteriores
 */
#include<stdio.h>

int main(void)
{
	int x, y, maior, menor;

	printf("Entre com o primeiro inteiro: ");
	scanf("%d",&x);
	printf("Entre com o segundo inteiro: ");
	scanf("%d",&y);

	printf("\nA soma é: %d\n",x + y);
	printf("O produto é: %d\n",x * y);

	if (y != 0) {                    /* O segundo número é diferente de zero? */
		printf("O resto é: %d\n",x % y);      /* Sim. Logo, existe resto      */
		printf("O quociente é: %d\n", x / y); /* e quociente.                 */
	} else                                    /* Não. Imprima apenas um aviso */
		printf("Não é possível calcular o resto e o quociente de uma divisão por 0\n");
	   	   
	maior = x;
	if (y > maior)
		maior = y;
	printf("O maior é: %d\n", maior);

	menor = x;
	if (y < menor)
		menor = y;
	printf("O menor é: %d\n", menor);

	return 0;
}

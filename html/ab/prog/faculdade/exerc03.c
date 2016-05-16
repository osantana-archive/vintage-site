/* Esse programa solicita para o usuário que ele entre com 3 números inteiros
 * para imprimir a soma, produto, maior e menor deles.
 * Comentário de alguns trechos desse programa estão em exercícios anteriores
 */

#include<stdio.h>

int main(void)
{
	int x, y, z, maior, menor; /* declaração de variáveis inteiras */

	printf("Entre com o primeiro inteiro: "); /* Imprime uma solicitação na */
                                              /* tela para o usuário        */
	scanf("%d",&x); /* repare que scanf só é necessário     */
                    /* quando há intervenção com o usuário. */
	printf("Entre com o segundo inteiro: ");  /* Repete o procedimento acima */
	scanf("%d",&y);
	printf("Entre com o terceiro inteiro: ");
	scanf("%d",&z);

	/* Nesse ponto do programa temos os três valores informados
	 * pelo usuário nas variáveis x,y e z
	 */
	
	printf("\nA soma é: %d\n",x + y + z);
	printf("O produto é: %d\n",x * y * z);
	
	/* Para explicar o trecho abaixo assumirei que o usuário digitou
	 * x=10, y=5, z=12
	 */
	
	maior = x;       /* 'maior' é igual a x que é 10, logo, 'maior' = 10   */
	if (y > maior)   /* y (5) é maior que 'maior' (10)?                    */
		maior = y;   /* no nosso caso não, se fosse, maior seria igual a y */
	if (z > maior)   /* z (12) é maior que 'maior' (10)? sim!              */
		maior = z;   /* então, maior é igual a z que é 12, logo, maior=12  */
	printf("O maior é: %d\n", maior); /* imprime maior */

	menor = x;       /* igual à parte anterior exceto pela inversão do sinal */
	if (y < menor)   /* de desigualdade                                      */
		menor = y;
	if (z < menor)
		menor = z;
	printf("O menor é: %d\n", menor);

	return 0;
}

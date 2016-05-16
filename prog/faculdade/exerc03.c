/* Esse programa solicita para o usu�rio que ele entre com 3 n�meros inteiros
 * para imprimir a soma, produto, maior e menor deles.
 * Coment�rio de alguns trechos desse programa est�o em exerc�cios anteriores
 */

#include<stdio.h>

int main(void)
{
	int x, y, z, maior, menor; /* declara��o de vari�veis inteiras */

	printf("Entre com o primeiro inteiro: "); /* Imprime uma solicita��o na */
                                              /* tela para o usu�rio        */
	scanf("%d",&x); /* repare que scanf s� � necess�rio     */
                    /* quando h� interven��o com o usu�rio. */
	printf("Entre com o segundo inteiro: ");  /* Repete o procedimento acima */
	scanf("%d",&y);
	printf("Entre com o terceiro inteiro: ");
	scanf("%d",&z);

	/* Nesse ponto do programa temos os tr�s valores informados
	 * pelo usu�rio nas vari�veis x,y e z
	 */
	
	printf("\nA soma �: %d\n",x + y + z);
	printf("O produto �: %d\n",x * y * z);
	
	/* Para explicar o trecho abaixo assumirei que o usu�rio digitou
	 * x=10, y=5, z=12
	 */
	
	maior = x;       /* 'maior' � igual a x que � 10, logo, 'maior' = 10   */
	if (y > maior)   /* y (5) � maior que 'maior' (10)?                    */
		maior = y;   /* no nosso caso n�o, se fosse, maior seria igual a y */
	if (z > maior)   /* z (12) � maior que 'maior' (10)? sim!              */
		maior = z;   /* ent�o, maior � igual a z que � 12, logo, maior=12  */
	printf("O maior �: %d\n", maior); /* imprime maior */

	menor = x;       /* igual � parte anterior exceto pela invers�o do sinal */
	if (y < menor)   /* de desigualdade                                      */
		menor = y;
	if (z < menor)
		menor = z;
	printf("O menor �: %d\n", menor);

	return 0;
}

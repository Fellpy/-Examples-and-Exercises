#include <stdio.h>

/* Exercicios C Progressivo

Questoes sobre IF e ELSE

0. Faça um programa que peça dois números ao 
usuário e mostre qual o maior e qual o menor
*/

int main(void)
{

	int n1, n2;

	printf("Digite um numero: ");
	scanf("%d",&n1);

	printf("Digite outro numero: ");
	scanf("%d",&n2);

	if(n1 > n2)
	{
		printf("%d eh maior do que %d\n",n1,n2);
	}
	else
	{
		printf("%d eh maior do que %d\n",n2,n1);
	}

	return 0;
}
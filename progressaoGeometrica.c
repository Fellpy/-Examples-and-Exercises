#include <stdio.h>
#include <math.h>

/* Crie um aplicativo em C que peça ao usuário o primeiro elemento de uma P.G(Progressão Aritimética), 
a razão da P.G e o número de elementos a serem exibidos.

O raciocínio é análogo ao do exemplo anterior. Mas o termo 'an' de uma P.G é diferente da P.A, e é dado por:
an = a1 * (razao)^(n-1)

A única diferença aqui é que vamos usar a função pow da biblioteca math.h.
O uso dela é bem simples: pow(a,b) significa 'a elevado a b'.
*/

int main(void)
{
	int init, rate, term;

	int num, count = 1;

	printf("Digite o numero inicial da P.G: ");
	scanf("%d", &init);

	printf("Digite a razao da P.G: ");
	scanf("%d",&rate);

	printf("Digite o numero de termos da P.G: ");
	scanf("%d", &term);

	while(count <= term)
	{
		num = init * pow(rate,(count - 1));
		printf("Termo %d: %d\n",count, num);
		count++;
	}

	return 0;
}
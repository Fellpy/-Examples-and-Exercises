#include <stdio.h>

/*
Crie um aplicativo em C que peça ao usuário o primeiro elemento de uma P.A(Progressão Aritimética), 
a razão da P.A e o número de elementos a serem exibidos.

O termo inicial P.A será armazenado na variável init.
A razão da P.A será armazenado na variável rate, e o número de elementos da P.A 
será armazenado na variável term.

Vamos usar duas variáveis de apoio, para contar.

Uma delas é a variável num, que representará o valor de cada termo da P.A. 
O valor dela será mudado a cada iteração, percorrendo todos os valores da P.A.

Já a variável count será usada para contar os termos da P.A. 
Os termos começam no primeiro (1) e terminar no último (term).

A fórmula para saber o valor do elemento 'an' de uma P.A é:
an = a1 + (n - 1) * razão
*/

int main(void)
{
	int init, rate, term;

	int num, count = 1;

	printf("Digite o numero inicial da P.A: ");
	scanf("%d", &init);

	printf("Digite a razao da P.A: ");
	scanf("%d",&rate);

	printf("Digite o numero de termos da P.A: ");
	scanf("%d", &term);

	while(count <= term)
	{
		num = init + (count - 1) * rate;
		printf("Termo %d: %d\n",count, num);
		count++;
	}

	return 0;
}
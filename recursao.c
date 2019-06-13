#include <stdio.h>

// Exemplo fatorial com recursão

int fatorial(int n)
{
	if (n == 0) // critério de parada
	{
		return 1;
	} else
	{
		// parâmetro do fatorial sempre muda
		return n * fatorial(n - 1);	
	}
}

int main(void)
{
	// /fatorial(4);
	printf("%d\n",fatorial(4));
	return 0;
}
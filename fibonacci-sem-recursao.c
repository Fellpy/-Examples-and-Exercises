#include <stdio.h>

// calculo da sequencia fibonacci sem recursao
int fibo(int n)
{
	int i, t, c, a = 0 , b = 1;

	for (i = 0; i < n; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return a;
}

int main()
{

	printf("%d\n",fibo(9));
	return 0;
}
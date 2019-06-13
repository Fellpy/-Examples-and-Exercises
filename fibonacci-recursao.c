#include <stdio.h>

// calculo da sequencia fibonacci com recursão
int fibo(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
}

int main()
{
	printf("%d\n",fibo(9));
	return 0;
}
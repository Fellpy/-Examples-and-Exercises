#include <stdio.h>

// Fatorial sem recursão

int fatorial(int n)
{
	if (n == 0)
	{
		return 1;
	}else
	{
		int i, f = 1;
		for (i = 2; i <= n; ++i)
		{
			f = f * i;
		}
		return f;
	}
}

int main(void)
{
	printf("%d\n",fatorial(4));

	return 0;
}
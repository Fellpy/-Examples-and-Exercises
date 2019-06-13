#include <stdio.h>

int main(void)
{

	int f [100][100][100][100];

	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			for (int k = 0; k < 100; ++k)
			{
				for (int h = 0; h < 100; ++h)
				{
					printf("0\n");
					f[i][j][k][h] = 0;
				}
			}
		}
	}
	return 0;
}
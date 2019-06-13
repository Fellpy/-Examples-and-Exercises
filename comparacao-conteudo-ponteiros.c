#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p, *p1, x = 10, y = 20;
	p = &x;
	p1 = &y;

	// comparando o conteúdo apontado pelos ponteiros
	if (*p > *p1) // se 10 > 20
	{
		printf("O conteúdo de p é maior do que o conteúdo de p1\n");
	}
	else
	{
		printf("O conteúdo de p NÃO é maior do que o conteúdo de p1\n");
	}

	return 0;
}
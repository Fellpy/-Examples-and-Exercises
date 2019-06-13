#include <stdio.h>

int main()
{
	int a,
	b = 1;

	printf("b = %d\n", b);
	printf("a = b++\n");

	a = b++;

	printf("\nAgora: \na = %d\n",a);

	printf("b = %d\n",b);
	printf("\na = ++b\n");

	a = ++b;

	printf("\nAgora: a = %d\n",a);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*As chaves podem ser ignoradas se o comando contido den-
	tro do if for único. */

	int num;
	printf("Digite um numero:\n");
	scanf("%d",&num);
	if(num > 10)
		printf("O numero e maior que 10\n");

	/* OU
	if (num > 10){
		printf("O numero e maior que 10");
	}
	*/

	return 0;
}
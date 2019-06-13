#include <stdio.h>
#include <string.h>

#define TAMANHO		3

int main(void)
{
	char str1[] = "123456789";
	char str2[4]; 
	// 0 1 2 3
	// 1 2 3 4


	// Copia os 3 primeiros caracteres da string str1 para
	// str2
	strncpy(str2,str1, TAMANHO);

	printf("str1 = [%s]\n", str1);
	printf("str2 = [%s]\n", str2);

	str2[3] = '\0';
	printf("str2 = [%s]\n",str2);;

	return 0;
}
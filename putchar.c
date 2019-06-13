#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* a função putchar() pode receber tanto um valor int ou
	um valor do tipo char, e ele retornará o proprio caracter
	no caso do tipo char, caso receba uma valor do tipo int
	ele retornará o caracter correspondente ao valor inteiro

	o valor 65 corresponde a letra "A" da tabela ASCII

	a função putchar() tambem aceita caracteres de escape
	como o '\n'
	*/
	
	char c = 'a';
	int x = 65;
	putchar(c);
	putchar('\n');
	putchar(x);
	putchar('\n');
	return 0;
}
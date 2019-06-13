#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* mostra o valor das variaveis com seus 
	modificadores de tipos para o meu computador,
	com o uso da função sizeof()
	*/

	printf("Tamanho dos tipos comuns de C(em bytes)com o seus modificadores:\n\n");
	printf("Valor de int %d bytes\n", sizeof(int)); // 4 bytes
	printf("Valor de short int : %d btes\n", sizeof(short int)); // 2 bytes
	printf("Valor de long int: %d bytes\n", sizeof(long int)); // 4 bytes
	printf("Valor de signed int: %d bytes\n", sizeof(signed int)); // 4 bytes
	printf("Valor de unsigned int: %d bytes\n",sizeof(unsigned int)); // 4 bytes
	printf("Valor de short signed int: %d bytes\n",sizeof(short signed int)); // 2 bytes
	printf("Valor de short unsigned int: %d bytes\n", sizeof(short unsigned int)); // 2 bytes
	printf("Valor de long signed int: %d bytes\n", sizeof(long signed int)); // 4 bytes
	printf("Valor de long unsigned int: %d bytes\n",sizeof(long unsigned int)); // 4 bytes

	printf("------------------------------------\n");
	printf("Tamanho dos tipos comuns de C(em bytes)sem modificadores de tipo:\n");

	printf("int: %d bytes\n",sizeof(int)); // 4 bytes
	printf("short: %d bytes\n",sizeof(short)); // 2 bytes
	printf("char: %d byte\n",sizeof(char)); // 1 byte
	printf("float: %d bytes\n",sizeof(float)); // 4 bytes
	printf("long: %d bytes\n",sizeof(long)); // 4 bytes
	printf("double: %d bytes\n",sizeof(double)); // 8 bytes
	printf("void: %d byte\n", sizeof(void)); // 1 byte
}
#include <stdio.h>

// dentro de um programa C pode-se acessar a 
// linha de comando que chamou o programa,
// permitindo assim passar valores para o programa
// na sua chamada

int main(int argc, char const *argv[])
{
	
	printf("Argumentos digitados\n");
	for (int i = 0; i < argc; ++i)
	{
		printf("Argumento %d - %s\n", i + 1, argv[i]);
	}

	return 0;
}
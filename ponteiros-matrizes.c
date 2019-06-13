#include <stdio.h>

void imprime(int *vet)
{
	for (int i = 0; i < 5; ++i)
	{
		// equivalente a vet[i]
		// i++
		printf("Conteúdo na matriz na posição %d = %d\n",i, *vet);
		
		printf("Endereço de memória = %p\n", vet);
		vet++; 
	}
	printf("\n");
}

int main(void)
{
	// matriz de 20 bytes
	int matriz1[5] = {1,2,3,4,5};

	// Tamanho da variavel da memoria e não da matriz
	printf("Tamanho da matriz = [%d]\n", sizeof(matriz1));

	imprime(matriz1);

	return 0;
}
#include <stdio.h>

// indica que o último parametro é um ponteiro para inteiro
void soma(int, int, int*);

int main(void)
{
	int vlr_a;
	int vlr_b;
	int resultado;

	printf("Entre com os valores: ");
	scanf("%d %d", &vlr_a, &vlr_b);
	
	// Chamada da função
	soma(vlr_a, vlr_b,&resultado);
	
	printf("Soma: %d\n", resultado);


	return 0;
}

void soma(int a, int b, int *valor)
{
	// Alterando diretamente na memória
	*valor = a + b;
}
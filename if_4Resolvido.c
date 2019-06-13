#include <stdio.h>

// idade minima
#define idadeMinima 18

// idade maxima
#define idadeMaxima 67

/* Exercicios C Progressivo Resolvidos

4. Para doar sangue é necessário ter entre 18 e 67 anos. 
Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e 
diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

int main(void)
{

	int idade;

	// le o valor da idade
	printf("Digite a sua idade: ");
	scanf("%d",&idade);

	if ((idade >= idadeMinima) && (idade <= idadeMaxima))
	{
		printf("Voce pode doar sangue!\n");
	}
	else 
	{
		printf("Voce nao pode doar sangue!\n");
	}

	return 0;
}
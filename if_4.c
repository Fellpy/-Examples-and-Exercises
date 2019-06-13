#include <stdio.h>

/* Exercicios C Progressivo

 4. Para doar sangue é necessário ter entre 18 e 67 anos. 
 Faça um aplicativo na linguagem C que pergunte a idade de uma 
 pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
 */

int main(void)
{
	int idadeParaDoarSangue;

	printf("Informe a sua idade: ");
	scanf("%d",&idadeParaDoarSangue);

	// Testa se a idade é a estipulada
	if(idadeParaDoarSangue >= 18 || idadeParaDoarSangue == 67)
	{
		printf("Voce esta na faixa de idade permitida, pode doar sangue.\n");
	}
	else
	{
		printf("Voce nao esta mais apto a doar sangue.\n");
	}

	return 0;
}
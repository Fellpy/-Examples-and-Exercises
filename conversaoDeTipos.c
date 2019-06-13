#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* com a multipla atribuição é possivel
	atribuir variaveis de tipos diferentes
	a outras variaveis de tipos diferentes cada,
	mas poderá ocorrer perda de informação.
	A conversão é automatica.
	*/

	int x = 65;
	char ch;
	float f = 25.1;

	// ch recebe 8 bits menos significativos de x
	// e converte para a tabela ASCII
	ch = x;
	printf("ch = %c\n",ch);
	// x recebe apenas a parte inteira de f
	x = f;
	printf("x = %d\n",x);
	// f recebe valor 8 bits convertido para real
	f = ch;
	printf("f = %f\n",f);
	// f recebe o valor de x
	f = x; // aqui não há conversão, porque f é um tipo basico maior que x
	printf("f = %f\n",f);

	return 0;
}
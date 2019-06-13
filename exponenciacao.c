#include <stdio.h>

int main()
{
	/* declarando e incializando variaveis na forma decimal
	exemplo: float numero = xEy;
	x vezes 10(E) elevado a y

	x vezes 10 elevado a y = x * 10^y
	Ou seja, 1E6 = 1 vezes 10^6 = 1 milhão
	*/

	float salarioSonho = 1E6, salarioReal = 10E-3;
	printf("Sonhei que meu salario era de R$%.2f,\nmas ai eu acordei e lembrei que eh: R$%.2f\n",
	salarioSonho,salarioReal);

}
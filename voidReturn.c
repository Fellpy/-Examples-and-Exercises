#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* uma função pode ter mais de uma
declaração return, mas não é recomendado
o uso de varios returns em uma mesma função,
pois, prejudica o seu entendimento e documentação.

assim que uma função encontra um return, ela é 
encerrada imediatamente.

um comando return sem um valor associado a ele em uma
função do tipo void, pode ser usado para terminar a função.
*/

void imprime_log(float x)
{
	if (x <= 0)
		return; // termina a função
	printf("Log = %f\n",log(x));
}

int main()
{
	float x;
	printf("Digite x: ");
	scanf("%f",&x);
	imprime_log(x);

	return 0;
}
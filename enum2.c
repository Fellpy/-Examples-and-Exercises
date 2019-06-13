#include <stdio.h>
#include <stdlib.h>

/* pode-se definir o valor das
constantes das enumerações
*/

// declarando uma enum com valores definidos
enum semana {Domingo = 1,Segunda,Terca,Quarta = 7,Quinta,Sexta,Sabado};

int main()
{
	printf("Domingo = %d\n",Domingo);
	printf("Segunda = %d\n",Segunda);
	printf("Terca = %d\n",Terca);
	printf("Quarta = %d\n",Quarta);
	printf("Quinta = %d\n",Quinta);
	printf("Sexta = %d\n",Sexta);
	printf("Sabado = %d\n",Sabado);

	return 0;
}
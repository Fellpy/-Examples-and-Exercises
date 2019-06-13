#include <stdio.h>
#include <stdlib.h>

/* constantes sao variáveis que 
armazenam dados e/ou valores que nao podem ser alterados.
Existem duas formas de de declarar constantes
atráves da diretira de compilação(diretiva de pré-processador)
#define ou pela keyword const.
*/

// declarando uma constante com a diretiva #define
#define PI 3.14

// declarando uma constante com a keyword const
const int salario = 1000;

int main()
{
	printf("%f\n", PI);
	printf("%d\n", salario);
	
	return 0;
}
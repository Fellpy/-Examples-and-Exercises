#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* sequencias de escpae sao constantes pré-definidas
	que geram caracteres especiais na saída
	do console.
	
	\a bip
	\b retrocesso (backspace)
	\n novalinha (new line)
	\v tabulação vertical
	\t tabulação horizontal
	\r retorno de carro(carriage return)
	\’ apóstrofe
	\” aspa
	\\ barra invertida
	\f alimentação de folha
*/

	printf("Hello World\n"); // \n nova linha
	printf("Hello \nWorld\n");
	printf("Hello \\ World\n"); // imprime uma barra 
	printf("\"Hello World\"\n"); // imprime aspas duplas
	printf("\a\n"); //emite um bip

	return 0;

}
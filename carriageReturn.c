#include <stdio.h>

int main()
{
	// esse caractere especial faz com que o cursor
	// se mova para o inicio da linha:
	printf("Carriage return: \r");
	getchar();
	return 0;
	// o comando getchar() faz com que o programa espere
	// que o usuario digite alguma tecla, aqui ele está
	// servindo de teste para mostrar o funcionamento 
	// do caractere \r
}
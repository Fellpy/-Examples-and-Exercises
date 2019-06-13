#include <stdio.h>

int main()
{
	int x,z;
	float y;
	// Leitura de um valor inteiro
	// o operador "&" é uma exigencia do C para ler 
	// valores do teclado por meio do seu endereço na memória
	scanf("%d",&x);
	// leitura de um valor real
	scanf("%f",&y);
	// leitura de um valor inteiro e outro real
	scanf("%i%f",&x,&y);
	// leitura de dois valores inteiros
	scanf("%i%d", &x,&z);
	// leitura de dois inteiros com espaço
	scanf("%d %i",&x,&z);

	return 0;
}
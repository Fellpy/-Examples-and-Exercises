#include <stdio.h>
#include <stdlib.h>

/* enumerações é uma lista de 
constantes com valores inteiros.

Se assemelha a estruturas no uso e 
na declaração.

Pode-se ser usada em qualquer
expressão valida com inteiros.
*/

// declaração de uma enum
enum semana {Domingo ,Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
/*
Domingo = 0
Segunda = 1
Terca = 2
Quarta = 3
Quinta = 4
Sexta = 5
Sabado = 6
*/

int main()
{
	// declarando variaveis do tipo enum
	enum semana s1, s2, s3;

	// inicializando as variaveis
	s1 = Segunda;
	s2 = Terca;
	s3 = s1 + s2;
	// exibindo os resultados
	printf("Domingo = %d\n",Domingo);
	printf("s1 = %d\n",s1);
	printf("s2 = %d\n",s2);
	printf("s3 = %d\n",s3);

	return 0;
}
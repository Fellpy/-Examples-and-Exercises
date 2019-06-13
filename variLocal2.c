#include <stdio.h>
#include <stdlib.h>

/* quando há uma variavel global com o mesmo
nome de uma variável local, o bloco em que está essa
variável local dará preferencia a variável declarada
dentro dele. ou seja:

Quando um bloco possui uma variável local com o mesmo
nome de uma variável global, esse bloco dará preferência à
variável local. O mesmo vale para duas variáveis locais em
blocos diferentes: a declaração mais próxima tem maior
precedência e oculta as demais variáveis com o mesmo
nome.
*/ 
int x = 5; // variável global, vale por todo o programa

int main()
{
	// inicio do escopo local
	
	/* até ser declarada a variavel x local de main,
	a variavel global x seŕa preferencia pelo bloco
	e ira imprimir o seu valor.
	*/
	printf("x = %d vari global\n",x);  // imprime o valor da vari global: 5

	int x = 4; // variavel local, pretencente a main(), vale somente dentro desse bloco
	printf("x = %d bloco main\n",x);

	
	// abrindo um bloco anônimo
   {
	// inicio do escopo local dentro de outro escopo local
	int x = 3; // variavel do bloco anonimo, o x é exclusivo desse bloco 
	//e so vale aqui dentro
	printf("x = %d bloco anonimo\n",x);
	//fim do escopo local do bloco anonimo

   }

	printf("x = %d escopo do bloco main\n",x); // saída 4, pois se refere
	//a vari x do bloco main()

	return 0;
}
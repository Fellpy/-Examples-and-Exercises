#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	De modo geral, a sequência de comandos do case não precisam estar
	entre chaves {}.
	
	Porém, se o primeiro comando dentro de um case for a
	declaração de uma variável, será necessário colocar todos
	os comandos desse case dentro de um par de chaves {}.
	*/

	char ch;
	int a,b;
	printf("Digite uma operacao matematica: ");
	ch = getchar();
	printf("Digite dois numeros inteiros:\n");
	scanf("%d%d",&a,&b);
	switch(ch){
		case '+':{ 
		int c = a + b;
		printf("Soma %d\n",c); 
		break;
		}

		case '-':{
			int d = a - b;
			printf("Subtracao: %d\n",d);
			break;
		}

		case '*':{
			int e = a * b;
			printf("Produto: %d\n",e);
		}break;

		case '/':{
			int f = a / b;
			printf("Divisao: %d\n",f);
		}break;

		default : printf("Nao e uma operacao!\n");
	}

	return 0;
}
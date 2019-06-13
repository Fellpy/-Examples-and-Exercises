#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercicios C Progressivo

Desafio 2. Escreva um programa que pede os 
coeficientes de uma equação do segundo grau e exibe as raízes da equação, 
sejam elas reais ou complexas.

Quando dizemos "raiz de uma equação", nos referimos ao resultado
final de uma equação qualquer.

As equações de 2º grau(do tipo ax² + bx + c = 0, onde a,b e c são
numeros reais e  a!=0) podem até ter duas raizes reais.

O número de raízes de uma equação do 2º grau irá depender do
valor do delta.

Equações do segundo grau são resolvidas aplicando a fórmula
de Bháskara.


Tutorial passo a passo:

Passo 1:
A primeira parte do programa recebe os três coeficientes da equação, que são 'a', 'b' e 'c' e 
serão representados pelo tipo float.

Passo 2:
Uma equação do 2o grau só é válida se 'a' for diferente de 0, então, se for igual a 0 o programa deverá 
terminar.
Ou seja, nosso programa irá acontece dentro do 'if' que checa que 'a' é diferente de 0.

Passo 3:
Determinando o valor de delta: delta = b² - 4ac
Determinando a raiz quadrada de delta: sqrtdelta = sqrt(delta);

Onde sqrt significa 'square root', ou raiz quadrada, em inglês.
Em C, calculamos a raiz quadrada do número x usando a função sqrt(),
que está na biblioteca math.h. Logo, precisamos importar essa biblioteca no começo do programa.

Passo 4:
Se delta for maior ou igual a zero, as raízes são dadas por:
raiz1 = (-b + sqrtdelta) / 2a
raiz2 = (-b - sqrtdelta) / 2a

Passo 5:
Se delta for menor que zero, suas raízes serão complexas e as raízes serão da forma:
raiz1 = (-b + i.sqrt(-delta) )/2a
raiz2 = (-b - i.sqrt(-delta) )/2a

Formatei a saída da seguinte forma, para ficar mais legível, que é a mesma coisa das equações anteriores:
raiz1 = (-b)/2a + i.sqrt(-delta)/2a
raiz2 = (-b)/2a - i.sqrt(-delta)/2a
*/

int main(void)
{
	float a, b, c, // coeficientes
	delta, // delta
	sqrtDelta, // raiz quadrada de delta
	raiz1, raiz2; // raízes

	// Passo 1: Recebendo os coeficientes
	printf("Equacao do 2º grau: ax² + bx + cx = 0\n");

	printf("Entre com o valor de a: ");
	scanf("%f", &a);

	printf("Entre com o valor de b: ");
	scanf("%f", &b);

	printf("Entre com o valor de c: ");
	scanf("%f", &c);

	// Passo 2: Checando se a equação é válida
	if (a != 0)
	{

		// Passo 3: recebendo o valor de delta e calculando sua raíz quadrada
		delta = (b * b) - (4 * a * c);
		sqrtDelta = sqrt(delta);

		// Passo 4: se a raíz delta for maior que 0, as raízes são reais
		if (delta >= 0)
		{
			raiz1 = (-b + sqrtDelta) / (2 * a);
			raiz2 = (-b - sqrtDelta) / (2 * a);
			printf("Raizes: %.2f e %.2f\n",raiz1,raiz2);
		}

		// Passo 5: se delta for menor que 0, as raízes serão complexas
		else 
		{
			delta = -delta;
			sqrtDelta = sqrt(delta);
			printf("Raiz 1: %.2f + i.%.2f\n",(-b) / (2 * a), (sqrtDelta)/(2*a));
			printf("Raiz 2: %.2f - i.%.2f\n",(-b) / (2 * a), (sqrtDelta)/(2*a));
		}
	}

	else
	{
		printf("Coeficiente 'a' invalido. Nao e uma equacao do 2º grau.\n");
	}

	return 0;
}
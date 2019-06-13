#include <stdio.h>

/* Exercicios C Progressivo

3. Escreva um programa que pergunte o raio de uma circunferência, 
e sem seguida mostre o diâmetro, 
comprimento e área da circunferência.

O diâmetro é a multiplicação do valor do raio
da circunferência por 2. (d = r * 2)

O calculo do comprimento se faz pela seguinte
expressão: (C = 2 * 3.14 * RAIO)

Para calcular a area da circunferencia usa-se
a expressão (a = 3.14 * r * r)
*/

int main(void)
{
	// Declara as variaveis
	float raio,diametro, comprimento, area;

	// le o valor do raio
	printf("Informe o valor do raio da circunferencia: ");
	scanf("%f",&raio);

	// calcula e exibe o diâmetro
	diametro = (raio * 2);

	// calcula o comprimento
	comprimento = (2 * 3.14 * raio);

	// calcula a area da circunferencia
	area = (3.14 * raio * raio);

	// exibe os resultados
	printf("A circunferencia possui um diametro de: %.2f\n",diametro);
	printf("um comprimento de: %.2f\n", comprimento);
	printf("e sua area equivale a: %.2f\n",area);

	return 0;
}
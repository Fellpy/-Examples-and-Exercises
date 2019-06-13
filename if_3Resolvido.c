#include <stdio.h>

// Constante PI
#define PI 3.14

/* Exercicios C Progressivo Resolvidos

3. Escreva um programa que pergunte o raio de uma circunferência, 
e sem seguida mostre o diâmetro, comprimento e área da circunferência.
*/

int main(void)
{
	float raio, diametro, comprimento, area;

	printf("Digite o raio: ");
	scanf("%f",&raio);

	// Calcula o diẫmetro
	diametro = raio * 2;

	// Calcula o comprimento
	comprimento = 2 * PI * raio;

	// Calcula a area
	area = PI * raio * raio;

	// exibe os resultados
	printf("Diametro: %.2f\n",diametro);
	printf("Comprimento: %.2f\n",comprimento);
	printf("Area: %.2f\n",area);

	return 0;
}
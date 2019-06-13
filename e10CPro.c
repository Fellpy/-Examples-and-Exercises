#include <stdio.h>
#include <stdlib.h>

/* Exercicios C Progressivo

10. Pinheiro  - Implemente um programa que desenhe um "pinheiro" na tela, similar ao abaixo.
Enriqueça o desenho com outros caracteres, simulando enfeites.

       X
      XXX
     XXXXX
    XXXXXXX
   XXXXXXXXX
  XXXXXXXXXXX
 XXXXXXXXXXXXX
XXXXXXXXXXXXXXX
       XX
       XX
      XXXX
*/

int main()
{
	for (int i = 0; i < 1; ++i)
	{
		printf("\tX\n");
		for (int j = 0; j < 1; ++j)
			printf("       XXX\n");
			for (int a = 0; a < 1 ; ++a)
				printf("      XXXXX\n");
				for (int f = 0; f < 1; ++f)
					printf("     XXXXXXX\n");
					for (int v = 0; v < 1; ++v)
						printf("    XXXXXXXXX\n");
						for (int g = 0; g < 1; ++g)
							printf("   XXXXXXXXXXX\n");
							for (int bb = 0; bb < 1; ++bb)
								printf("  XXXXXXXXXXXXX\n");
								for (int ii = 0; ii < 1; ++ii)
									printf(" XXXXXXXXXXXXXXX\n");
									for (int aaa = 0; aaa < 1; ++aaa)
										printf("        XX\n");
										for (int fg = 0; fg < 1; ++fg)
											printf("        XX\n");
											for (int vb = 0; vb < 1; ++vb)
												printf("       XXXX\n");
	}
}
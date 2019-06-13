#include <stdio.h>

/* na definição de uma matriz, podemos ao mesmo tempo
inicializa-la de acordo com as seguintes regras:
 
 - Os valores devem ser colocados de acordo com a dimensões
 - Cada dimensão deve ser colocada dentro de { }
 - Não se pode pular valores, todos os valores devem ser colocados
*/

void main(void)
{

	int matriz1[5] = {1,2,3,4,5};
	
	int matriz2[3][3] = { {11,12,13},
						  {21,22,23},
						  {31,32,33}  };


	int matriz3[3][2][2] = { 
							
							{     {111 , 112},
								  {121 , 122}    },
								
							

							{     {211 , 212},
								  {221 , 222}    },

							

							{     {311 , 312},
								  {321 , 322}	   }  

														};

	
	printf("Primeira matriz\n");
	for (int i = 0; i < 5; ++i){
		printf("%d\n", matriz1[i]);
	}

    
    printf("\n");


    printf("Segunda matriz\n");
    for (int i = 0; i < 3; ++i){
    	for (int j = 0; j < 3; ++j){
    		printf("%d\n", matriz2[i][j]);
    	}
    	printf("\n");
    }

    
    printf("\n");


    printf("Terceira matriz\n");
    for (int i = 0; i < 3; ++i){
    	for (int j = 0; j < 2; ++j){
    		for (int k = 0; k < 2; ++k)
    			printf("%d ", matriz3[i][j][k]);	
    		printf("\n");
    	}
    	printf("\n");
    }
}
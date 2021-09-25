#include <stdio.h>
void main() {
	float Dimensao, linha, coluna, rei = 1.0;
	printf("Informe a dimensao do tabuleiro(NxN).\nN:");
	scanf("%f", &Dimensao);
	for (int linha = 1; linha <= Dimensao; linha++){
		rei = linha % 2;
		for (int coluna = 1; coluna <= Dimensao; coluna++){				
			if (rei == 0){
				printf("0\t");
			}else{
				printf("1\t");
			}			
		}		
		printf("\n");			
	}
}
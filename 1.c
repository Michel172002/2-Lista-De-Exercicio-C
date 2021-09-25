#include <stdio.h>
void main() {
	float Dimensao, linha, coluna, rei;
	printf("Informe a dimensao do tabuleiro(NxN).\nN:");
	scanf("%f", &Dimensao);
	rei = Dimensao;
	for (int linha = 1; linha <= Dimensao; linha++){
		for (int coluna = 1; coluna <= Dimensao; coluna++){				
			if (rei == coluna){
				printf("1\t");
			}else{
				printf("0\t");
			}			
		}
		printf("\n");
		rei--;
	}
}
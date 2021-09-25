#include <stdio.h>
void main(){
	float ValorXerox, PrecoXerox,QuatColuna = 1, coluna;
	int QuantLinha;
	printf("informe o valor do xerox:");
	scanf("%f", &ValorXerox);
	printf("\nInforme a quantidade de linhas que serao impressas na folha:");
	scanf("%i", &QuantLinha);
	printf("\nValores Impressos:\n");
	for(QuantLinha; QuantLinha >= 1; QuantLinha--){
		for(int coluna = 1; coluna <= 10; coluna++){
			PrecoXerox += ValorXerox;
			printf("%.0f = %.2f|\t", QuatColuna, PrecoXerox);
			QuatColuna++;			
		}
		printf("\n");
	}
}
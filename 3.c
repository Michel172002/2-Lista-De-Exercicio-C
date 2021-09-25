#include <stdio.h>
void main (){
	float a1, r, an, tabela = 1.0, termo = 1.0, ValorTermo, SomaTermos = 0.0, ProdutoTermos = 1.0;
	printf("Informe o primeiro termo da Progressao Geometrica (PG):");
	scanf("%f", &a1);
	printf("Informe a razao da PG:");
	scanf("%f", &r);
	printf("informe o termo que deseja saber:");
	scanf("%f", &an);
	ValorTermo = a1;
	for ((int) tabela; tabela <= an; tabela++){
		printf("TERMO: %.0f\t|\tVALOR: %.2f\n", termo, ValorTermo);
		SomaTermos += ValorTermo;
		ProdutoTermos *= ValorTermo;
		ValorTermo *= r;
		termo++;
	}
	printf("Soma Dos Termos da PG: %.2f\n", SomaTermos);
	printf("Produto Dos Termos da PG: %.2f", ProdutoTermos);
	

}
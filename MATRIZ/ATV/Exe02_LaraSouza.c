#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char nome_loja[8][30];
	char nome_produto[4][30];
	float precos[8][4];
	int i, j;
	
	for (i = 0; i < 8; i++) {
		printf("\nDigite o nome da %dº loja: ", i);
		scanf("%s%*c", &nome_loja[i]);
	}
	
	for (j = 0; j < 8; j++) {
		printf("\nDigite o %d produto: ", j);
		scanf("%s%*c", &nome_produto[j]);
	}
	
	printf("\nDigite os preços de cada produto em cada loja: ");
	
	for (i = 0; i < 8; i++) {
		printf("\nLoja: %s", nome_loja[i]);
		for (j = 0; j < 8; j++) {
			printf("\nPreço do produto: R$", nome_produto[j]);
			scanf("%f%*c", &precos[i][j]);
		}
	}
	
	printf("\nProdutos com o preço até R$60,00: ");
	
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (precos[i][j] <= 60) {
				printf("%s - %s (R$%0.2f)\n", nome_loja[i], nome_produto[j], precos[i][j]);
			}
		}
	}
	
	return 0;
}
	
	
	
	
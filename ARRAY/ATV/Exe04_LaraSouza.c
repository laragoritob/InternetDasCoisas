#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
#define SALARIO 545
#define COMISSAO 0.05

int main() {
	float preco[TAM], total[TAM];
	int qntd[TAM];
	float total_geral = 0, comissao, salario_final;
	int i, maisVendido = 0;
	
	for(i = 0, i < TAM, i++) {
		printf("Digite o preço do %dº objeto: ", i + 1);
		scanf("%d", &preco[i]);
		printf("Digite a quantidade vendida do %dº objeto: ", i + 1);
		scanf("%d", &qntd[i]);
	}
	
	return 0;
}
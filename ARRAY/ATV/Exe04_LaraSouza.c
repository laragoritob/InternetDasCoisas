#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
#define SALARIO 545.00
#define COMISSAO 0.05

int main() {
	float preco[TAM], total[TAM];
	int qntd[TAM];
	float total_geral = 0.0, comissao, salario_final;
	int i, mais_vendido = 0;
	
	for(i = 0; i < TAM; i++) {
		printf("\nDigite o preço do %dº objeto: ", i + 1);
		scanf("%f", &preco[i]);
		printf("Digite a quantidade vendida do %dº objeto: ", i + 1);
		scanf("%d", &qntd[i]);
	}
	
	printf("\nRELATÓRIO DE VENDAS:\n");
	printf("Objeto | Quantidade | Preço Unitário | Total\n");
	
	for (i = 0; i < TAM; i++) {
		total[i] = preco [i] * qntd[i];
		
		printf("%d      |     %d       |       %.2f      |  %.2f   \n", i + 1, qntd[i], preco[i], total[i]);
		
		total_geral = total_geral + total[i];
		
		if (qntd[i] > qntd[mais_vendido]) {
			mais_vendido = i;
		}
	}
	
	comissao = total_geral * COMISSAO;
	salario_final = SALARIO + comissao;
	
	printf("\nTotal Geral das Vendas: R$%.2f", total_geral);
	printf("\nComissão do Vendedor: R$%.2f", comissao);
	printf("\nSalário Final do Vendedor: R$%.2f", salario_final);
	printf("\nObjeto Mais Vendido: %d (Quantidade: %d)\n", mais_vendido + 1, qntd[mais_vendido]);
	
	return 0;
}
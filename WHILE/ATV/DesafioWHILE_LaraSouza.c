#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1;
	float preco, custo, imposto, preco_final;
	char refrigeracao, categoria;
	
	float soma_custos = 0, soma_impostos = 0, soma_adicionais = 0, maior_preco = 0, menor_preco = 0;
	int barato = 0, normal = 0, caro = 0;
	
	while (i <= 12) {
		printf("\n\nCódigo do Produto: %d\n", i);
		
		printf("\nPreço Unitário: R$");
		scanf("%f%*c", &preco);
		
		printf("Necessita Refrigeração (S/N): ");
		scanf("%c%*c", &refrigeracao);
		
		printf("\nEscolha a Categoria (A - Alimentação / L - Limpeza / V - Vestuário): ");
		scanf("%c", &categoria);
		
		if (preco <= 20) {
			switch (categoria) {
				case 'A':
					custo = 2;
					break;
					
				case 'L':
					custo = 3;
					break;
					
				case 'V':
					custo = 4;
					break;
				
				default:
					printf("\nCATEGORIA INVÁLIDA!!!");
					break;
			}
		} else if (preco > 20 && preco <= 50) {
			if (refrigeracao == 'S') {
				custo = 6;
			} else {
				custo = 0;
			}
		} else {
			if (refrigeracao == 'S') {
				switch (categoria) {
					case 'A':
						custo = 5;
						break;
						
					case 'L':
						custo = 2;
						break;
						
					case 'V':
						custo = 4;
						break;
					
					default:
						printf("\nCATEGORIA INVÁLIDA!!!");
						break;
				}
			} else {
				switch (categoria) {
					case 'A':
						custo = 0;
						break;
						
					case 'L':
						custo = 1;
						break;
						
					case 'V':
						custo = 0;
						break;
					
					default:
						printf("\nCATEGORIA INVÁLIDA!!!");
						break;
				}
			}
		}
		
		if (categoria == 'A' && refrigeracao == 'S') {
			imposto = preco * 0.04;
		} else {
			imposto = preco * 0.02;
		}
		
		preco_final = preco + custo + imposto;
		
		if (preco_final <= 20) {
			printf("\nClassificação: BARATO\n");
			
			barato = barato + 1;
		} else if (preco_final > 20 && preco_final <= 100) {
			printf("\nClassificação: NORMAL\n");
			
			normal = normal + 1;
		} else {
			printf("\nClassificação: CARO\n");
			
			caro = caro + 1;
		}
		
		soma_custos = soma_custos + custo;
		soma_impostos = soma_impostos + imposto;
		soma_adicionais = soma_adicionais + (custo + imposto);
		
		if (i == 1) {
			maior_preco = menor_preco = preco_final;
		} else {
			if (preco_final > maior_preco) {
				maior_preco = preco_final;
			}
			if (preco_final < menor_preco) {
				menor_preco = preco_final;
			}
		}
		
		printf("Preço Final do Produto %d: R$%.2f  |  Custo: R$%.2f  |  Imposto: R$%.2f \n", i, preco_final, custo, imposto);
		
		i = i + 1;
	}

	printf("Média dos valores adicionais: R$.2f\n", soma_adicionais / 12);	
	printf("Maior preço final: R$.2f\n", maior_preco);	
	printf("Menor preço final: R$.2f\n", menor_preco);	
	printf("Total de impostos: R$.2f\n", soma_impostos);
	printf("Quantidade de produtos com classificação barato: R$.2f\n", barato);	
	printf("Quantidade de produtos com classificação normal: R$.2f\n", normal);	
	printf("Quantidade de produtos com classificação caro: R$.2f\n", caro);		
}


	
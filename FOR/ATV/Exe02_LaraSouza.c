#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i, cod_cidade, num_veiculos, num_acidentes, soma_veiculos, soma_acidentes, cont_cidades, media_acidentes, maior_acidentes, menor_acidentes, media_veiculos, cod_menor, cod_maior;
	
	for (i = 1; i <= 5; i++) {
		printf("Digite o código da cidade: ");
		scanf("%d", &cod_cidade);
		
		printf("Digite o número de veículos de passeio: ");
		scanf("%d", &num_veiculos);
		
		printf("Digite o número de acidentes de trânsito com vítimas: ");
		scanf("%d", &num_acidentes);
		
		soma_veiculos = soma_veiculos + num_veiculos;
		
		if (num_veiculos < 2000) {
			soma_acidentes = soma_acidentes + num_acidentes;
			cont_cidades = cont_cidades + 1;
		}
		
		if (i == 1) {
			maior_acidentes = num_acidentes;
			menor_acidentes = num_acidentes;
			cod_maior = cod_cidade;
			cod_menor = cod_cidade;
		} else {
			if (num_acidentes > maior_acidentes) {
				maior_acidentes = num_acidentes;
				cod_maior = cod_cidade;
			}
			if (num_acidentes < menor_acidentes) {
				menor_acidentes = num_acidentes;
				cod_menor = cod_cidade;
			}
		}
	}
	
	
	printf("\nCidade com maior índice de acidentes de trânsito: %d | ACIDENTES: %d\n", cod_maior, maior_acidentes);
	printf("Cidade com menor índice de acidentes de trânsito: %d | ACIDENTES: %d\n", cod_menor, menor_acidentes);
	printf("Média de veículos das cinco cidades juntas: %.2f\n", soma_veiculos / 5);
	
	if (cont_cidades > 0)
		printf("Média de acidentes de trânsito nas cidades com menos de 2.000 veículos: %2.f\n", soma_acidentes / cont_cidades);
	else
		printf("Nenhuma cidade com menos de 2.000 veículos.\n");
}
	
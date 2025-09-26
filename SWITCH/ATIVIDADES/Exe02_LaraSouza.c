#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, novoSalario, imposto;
	int opcao;
	
	printf("1 - Imposto.\n");
	printf("2 - Novo Salário.\n");
	printf("3 - Classificação.\n");
	printf("Escolha uma das opções acima: ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Digite o salário do funcionário: R$");
			scanf("%f", &salario);
			
			if (salario < 500) {
				imposto = 0.05 * salario;
			} else if (salario >= 500 && salario <= 850) {
				imposto = 0.10 * salario;
			} else {
				imposto = 0.15 * salario; 
			}
				
			printf("Valor do Imposto: R$%.2f\n", imposto);
			break;
			
		case 2:
			printf("Digite o salário do funcionário: R$");
			scanf("%f", &salario);
			
			if (salario > 1500) {
				novoSalario = salario + 25;
			} else if (salario >= 750 && salario <= 1500) {
				novoSalario = salario + 50;
			} else if (salario >= 450 && salario <= 749) {
				novoSalario = salario + 75;
			} else {
				novoSalario = salario + 100;
			}
			
			printf("Novo Salário: R$%.2f\n", novoSalario);
			break;
			
		case 3:
			printf("Digite o salário do funcionário: R$");
			scanf("%f", &salario);
			
			if (salario <= 700)
				printf("Sua classificação é Mal Remunerado!");
			else
				printf("Sua classificação é Bem Remunerado!");
			break;
				
		default:
			printf("OPÇÃO INVÁLIDA!!!");
			break;
	}
}
	
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, novoSalario, imposto, salarioImposto;
	int opcao;
	
	printf("1 - Imposto.");
	printf("2 - Novo Salário.");
	printf("3 - Classificação.");
	printf("Escolha uma das opções acima: \n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Digite o salário do funcionário: ");
			scanf("%.2f", &salario);
			
			if (salario < 500)
				imposto = 5/100;
				salario = salario * imposto;
				salarioImposto = salario - imposto; 
				
				printf("Valor do Imposto: R$", imposto);
				printf("Salário após o imposto: R$", salarioImposto);
			else if (salario >= 500 && salario <= 850)
				imposto = 10/100;
				salario = salario * imposto;
				salarioImposto = salario - imposto; 
				
				printf("Valor do Imposto: R$", imposto);
				printf("Salário após o imposto: R$", salarioImposto);
			
		case 2:
			
			
		case 3:
	}
	
	
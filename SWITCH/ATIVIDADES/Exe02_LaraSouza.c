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
				
			else
				imposto = 15/100;
				salario = salario * imposto;
				salarioImposto = salario - imposto; 
				
				printf("Valor do Imposto: R$", imposto);
				printf("Salário após o imposto: R$", salarioImposto);
			
		case 2:
			printf("Digite o salário do funcionário: ");
			scanf("%.2f", &salario);
			
			if (salario > 1500)
				novoSalario = salario + 25;
				printf("Novo Salário: R$", novoSalario);
				
			else if (salario >= 750 && salario <= 1500)
				novoSalario = salario + 50;
				printf("Novo Salário: R$", novoSalario);
				
			else if (salario >= 450 && salario <= 749)
				novoSalario = salario + 75;
				printf("Novo Salário: R$", novoSalario);
				
			else
				novoSalario = salario + 100;
				printf("Novo Salário: R$", novoSalario);
			
		case 3:
			if (salario <= 700)
				printf("Sua classificação é Mal Remunerado!");
			else
				printf("Sua classificação é Bem Remunerado!");
				
		default:
			printf("OPÇÃO INVÁLIDA!!!");
	}
}
	
	
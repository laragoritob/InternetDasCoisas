#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, aumento;
	int ano;
	
	salario = 1000;
	aumento = 1.5;
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano);
	
	ano = ano - 2020;
	
	while (ano--) {
		salario = salario + (salario * (aumento/100));
		aumento = aumento * 2;
	}
	
	printf("Salário Atual = R$%.2f\n", salario);
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2018, 2019, 2020

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, aumento;
	int i;
	
	salario = 1000;
	aumento = 1.5;
	
	for (i = 2019; i <= 2025; i++) {
		salario = salario + (salario * (aumento/100));
		aumento = aumento * 2;
	}
	
	printf("Salário Atual = R$%2.f\n", salario);
}
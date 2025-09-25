#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	float salario, novo_salario, aumento;
	
	// Input com mensagem antes da leitura do salário 
	printf("Digite o salário do funcionário: R$");
	
	// Recebe o salário
	scanf("%f%*c", &salario);
	
	// Cálculo para aumento do salário
	aumento = salario * 0.25;
	
	// Soma do salário atual com o aumento
	novo_salario = salario + aumento;
	
	// Mensagens mostrando as informações
	printf("\nSalário Atual: R$%0.2f", salario);
	printf("\nAumento: R$%0.2f", aumento);
	printf("\nNovo Salário: R$%0.2f", novo_salario);
	
	// Para o programa a espera de um ENTER 
	getchar();
	return 0;
}
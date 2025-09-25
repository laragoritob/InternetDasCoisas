#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	float salario_base, salario, gratificacao, imposto;
	
	// Input com mensagem antes da leitura do salário base
	printf("Digite o salário do funcionário: R$");
	
	// Recebe o salário base
	scanf("%f%*c", &salario_base);
	
	// Cálculo para gratificação
	gratificacao = salario_base * 0.05;
	
	// Cálculo para imposto
	imposto = salario_base * 0.07;
	
	// Soma do salário base com a gratificação
	salario = salario_base + gratificacao;
	
	// Subtração do salário com o imposto
	salario = salario - imposto;
	
	// Mensagens mostrando as informações
	printf("\nSalário Base: R$%0.2f", salario_base);
	printf("\nValor da Gratificação: R$%0.2f", gratificacao);
	printf("\nValor do Imposto: R$%0.2f", imposto);
	printf("\nSalário a Receber: R$%0.2f", salario);
	
	getchar();
	return 0;
}
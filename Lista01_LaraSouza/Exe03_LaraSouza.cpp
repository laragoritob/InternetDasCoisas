#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	float dep_valor, rendimento, total, juros;
	
	// Input com mensagem antes da leitura do valor do depósito
	printf("Digite o valor do depósito: R$");
	
	// Recebe o valor do depósito
	scanf("%f%*c", &dep_valor);
	
	// Input com mensagem antes da leitura da taxa de juros
	printf("\nDigite o valor da taxa de juros: ");
	
	// Recebe o valor do depósito
	scanf("%f%*c", &juros);
	
	// Cálculo para taxa de juros
	juros = juros/100;
	
	// Cálculo para rendimento
	rendimento = dep_valor * juros;
	
	// Cálculo do valor total
	total = dep_valor + rendimento;
	
	// Mensagens mostrando as informações
	printf("\nValor do Depósito: R$%0.2f", dep_valor);
	printf("\nValor do Rendimento: R$%0.2f", rendimento);
	printf("\nValor Total: R$%0.2f", total);
	
	getchar();
	return 0;
}
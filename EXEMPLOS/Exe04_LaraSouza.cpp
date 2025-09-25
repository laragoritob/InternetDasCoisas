#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	float polegadas, jardas, milhas, pe;
	
	// Input com mensagem antes da leitura da medida
	printf("Digite uma medida em pés: ");
	
	// Recebe o valor da medida em pés
	scanf("%f%*c", &pe);
	
	// Cálculo da conversão para polegadas
	polegadas = pe * 12;
	
	// Cálculo da conversão para jardas
	jardas = pe/3;
	
	// Cálculo da conversão para milhas
	milhas = jardas * 1760;
	
	// Mensagens mostrando as informações
	printf("\nValor em Polegadas: %0.1f", polegadas);
	printf("\nValor em Jardas: %0.4f", jardas);
	printf("\nValor em Milhas: %0.1f", milhas);
	
	getchar();
	return 0;
}
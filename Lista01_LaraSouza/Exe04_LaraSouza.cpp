#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	int num1, num2, num3, num4, soma;
	
	printf("Digite o 1º número: ");
	scanf("%d%*c", &num1);
	
	printf("Digite o 2º número: ");
	scanf("%d%*c", &num2);
	
	printf("Digite o 3º número: ");
	scanf("%d%*c", &num3);
	
	printf("Digite o 4º número: ");
	scanf("%d%*c", &num4);
	
	soma = num1 + num2 + num3 + num4;
	
	// Mensagens mostrando as informações
	printf("\nSoma Total: %d", soma);
	
	getchar();
	return 0;
}
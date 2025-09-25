#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	float nota1, nota2, nota3, media;
	
	printf("Digite a 1º nota: ");
	scanf("%f%*c", &nota1);
	
	printf("Digite a 2º nota: ");
	scanf("%f%*c", &nota2);
	
	printf("Digite a 3º nota: ");
	scanf("%f%*c", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	// Mensagens mostrando as informações
	printf("\nMédia Total: %0.2f", media);
	
	getchar();
	return 0;
}
#include <stdio.h>
#include <locale.h> // Biblioteca de idioma

int main () {
		setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para português
		
	// Declaração da variável
	float nota1, peso1, nota2, peso2, nota3, peso3, soma1, soma2, media;
	
	printf("Digite a 1º nota: ");
	scanf("%f%*c", &nota1);
	
	printf("Digite o peso da 1º nota: ");
	scanf("%f%*c", &peso1);
	
	printf("\nDigite a 2º nota: ");
	scanf("%f%*c", &nota2);
	
	printf("Digite o peso da 2º nota: ");
	scanf("%f%*c", &peso2);
	
	printf("\nDigite a 3º nota: ");
	scanf("%f%*c", &nota3);
	
	printf("Digite o peso da 3º nota: ");
	scanf("%f%*c", &peso3);
	
	soma1 = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
	soma2 = peso1 + peso2 + peso3;
	
	media = soma1 / soma2;
	
	// Mensagens mostrando as informações
	printf("\nMédia Ponderada: %0.2f", media);
	
	getchar();
	return 0;
}
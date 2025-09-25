#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade <= 11) 
		printf("Você é criança!");
	else if (idade >= 12 && idade <= 18)
		printf("Você é adolescente!");
	else if (idade >= 19 && idade <= 24)
		printf("Você é jovem!");
	else if (idade >= 25 && idade <= 59)
		printf("Você é adulto!");
	else
		printf("Você é idoso!");
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i, soma, num;
	soma = 0;
	
	for (i = 1; i <= 5; i++) {
		printf("Digite um número: ");
		scanf("%d%*c", &num);
		
		soma = soma + num;
	}
	
	printf("Soma = %d", soma);
}
	
	
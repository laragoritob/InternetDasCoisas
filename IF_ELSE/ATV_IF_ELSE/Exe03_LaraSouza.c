#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 < num2) {
		printf("%d", num2);
		printf("\n%d", num1);
	} else {
		printf("%d", num1);
		printf("\n%d", num2);
	}
}
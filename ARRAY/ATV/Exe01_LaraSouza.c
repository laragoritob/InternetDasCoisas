#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num_primos[9];
	int i, j, primo;
	
	for (i = 0; i < 9; i++) {
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num_primos[i]);
	}
	
	for (i = 0; i < 9; i++) {
		if (num_primos[i] <= 1) {
			continue;
		}	
		
		primo = 1;
			
		for (j = 2; j < num_primos[i]; j++) {
			if (num_primos[i] % j == 0) {
				primo = 0;
				break;
			}
		}
		
		if (primo == 1) {
			printf("\nO número %d é primo e está no índice %d\n", num_primos[i], i);
		}
	}
	
	return 0;
}
	
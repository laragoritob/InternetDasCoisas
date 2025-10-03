#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int M[2][2], R[2][2];
	int i, j, maior_num;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("\nDigite o elemento da linha %d e coluna %d: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	
	maior_num = M[0][0];
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (M[i][j] > maior_num) {
				maior_num = M[i][j];
			}
		}
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			R[i][j] = M[i][j] * maior_num;
		}
	}
	
	printf("\nImprimindo a matriz resultante: ");
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", R[i][j]);
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main() {
    int numeros[TAM];
    int i;
    int encontrou = 0;  

    for (i = 0; i < TAM; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros maiores que 50 e suas posições:\n");
    for (i = 0; i < TAM; i++) {
        if (numeros[i] > 50) {
            printf("Número %d no índice %d\n", numeros[i], i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum número maior que 50 foi encontrado no vetor.\n");
    }

    return 0;
}

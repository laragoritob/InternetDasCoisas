#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_CARROS 5
#define DISTANCIA 1000

int main() {
    char modelos[NUM_CARROS][20];
    float consumo[NUM_CARROS];
    float litrosNecessarios[NUM_CARROS];
    int maisEconomico = 0;

    for (int i = 0; i < NUM_CARROS; i++) {
        printf("Digite o modelo do %dº carro: ", i + 1);
        scanf("%s", modelos[i]);

        printf("Digite o consumo do %s (km/l): ", modelos[i]);
        scanf("%f", &consumo[i]);
    }

    for (int i = 0; i < NUM_CARROS; i++) {
        litrosNecessarios[i] = DISTANCIA / consumo[i];

        if (consumo[i] > consumo[maisEconomico]) {
            maisEconomico = i;
        }
    }

    printf("\nCarro mais econômico: %s (%.2f km/l)\n\n", modelos[maisEconomico], consumo[maisEconomico]);

    printf("Consumo de combustível para percorrer 1000 km:\n");
    for (int i = 0; i < NUM_CARROS; i++) {
        printf("%s: %.2f litros\n", modelos[i], litrosNecessarios[i]);
    }

    return 0;
}

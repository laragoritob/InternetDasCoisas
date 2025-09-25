#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	if(getchar() == 'p')
		printf("Você digitou p");
	else
		printf("Você não digitou p");
}
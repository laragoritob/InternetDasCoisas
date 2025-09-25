#include <stdio.h>

int main () {
	if(getchar() == 'p') {
		printf("Você digitou p");
		printf("Pressione outra tecla");
		getchar();
	}
}
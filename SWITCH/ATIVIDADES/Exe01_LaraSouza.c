#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes;
	
	printf("Digite seu dia de nascimento: ");
	scanf("%d", &dia);
	
	printf("Digite seu mes de nascimento (utilize números): ");
	scanf("%d", &mes);
	
	switch(mes) {
		case 1:
			if (dia < 20)
				printf("Você é de Capricórnio!\n");
			else
				printf("Você é de Aquário!\n");
			break;
		
		case 2:
			if (dia < 19)
				printf("Você é de Aquário!\n");
			else
				printf("Você é de Peixes!\n");
			break;
			
		case 3:
			if (dia < 21)
				printf("Você é de Peixes!\n");
			else
				printf("Você é de Áries!\n");
			
			break;
			
		case 4:
			if (dia < 20)
				printf("Você é de Áries!\n");
			else
				printf("Você é de Touro!\n");
			break;
			
		case 5:
			if (dia < 21)
				printf("Você é de Touro!\n");
			else
				printf("Você é de Gêmeos!\n");
			break;
		
		case 6:
			if (dia < 22)
				printf("Você é de Gêmeos!\n");
			else
				printf("Você é de Câncer!\n");
			break;
			
		case 7:
			if (dia < 23)
				printf("Você é de Câncer!\n");
			else
				printf("Você é de Leão!\n");
			
			break;
			
		case 8:
			if (dia < 23)
				printf("Você é de Leão!\n");
			else
				printf("Você é de Virgem!\n");
			break;
			
		case 9:
			if (dia < 23)
				printf("Você é de Virgem!\n");
			else
				printf("Você é de Libra!\n");
			break;
		
		case 10:
			if (dia < 23)
				printf("Você é de Libra!\n");
			else
				printf("Você é de Escorpião!\n");
			break;
			
		case 11:
			if (dia < 22)
				printf("Você é de Escorpião!\n");
			else
				printf("Você é de Sagitário!\n");
			
			break;
			
		case 12:
			if (dia < 22)
				printf("Você é de Sagitário!\n");
			else
				printf("Você é de Capricórnio!\n");
			break;
			
		default:
			printf("MÊS INVÁLIDO!!\n");
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media, media_classe, soma_media;
	int aprovados = 0, reprovados = 0, exames = 0;
	int alunos = 1;
	
	while (alunos <= 6) {
		printf("Digite as duas notas do %dº aluno:\n", alunos);
		scanf("%f %f", &nota1, &nota2);
		
		media = (nota1 + nota2)/2;
		
		soma_media = soma_media + media;
		
		if (media >= 7) {
			printf("\nMédia do %dº aluno: %.2f  | Status: APROVADO \n\n\n", alunos, media);
			
			aprovados = aprovados + 1;
		} else if (media > 3 && media < 7){
			printf("\nMédia do %dº aluno: %.2f  | Status: EXAME \n\n\n", alunos, media);
			
			exames = exames + 1;
		} else {
			printf("\nMédia do %dº aluno: %.2f  | Status: REPROVADO \n\n\n", alunos, media);
			
			reprovados = reprovados + 1;
		}
		
		alunos = alunos + 1;
	}
	
	media_classe = soma_media/6;
	
	printf("Média da Classe: %.2f\n", media_classe);
	printf("Total de alunos aprovados: %d\n", aprovados);
	printf("Total de alunos em exame: %d\n", exames);
	printf("Total de alunos reprovados: %d\n", reprovados);
	
	return 0;
}
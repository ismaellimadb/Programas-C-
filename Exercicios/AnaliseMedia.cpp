#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int nota1,nota2,nota3,media,exame,epoca,nvmed,novamed;
	printf("\n Insira a nota do primeiro bimestre: ");
	scanf("%d",&nota1);
	printf("\n Insira a nota do segundo bimestre: ");
	scanf("%d",&nota2);
	printf("\n Insira a nota do terceiro bimestre: ");
	scanf("%d",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	if(media>=7){
		printf("\n APROVADO \n");
		printf("\n M�dia: %d \n",media);
		
	}
	else{
		printf("\n EXAME \n");
		printf("\n M�dia: %d \n",media);
		printf("\n Insira a nota do exame: ");
		scanf("%d",&exame);
		
		nvmed=(nota1+nota2+nota3+exame)/4;
		
		if(nvmed>=5){
			printf("\n APROVADO EM EXAME \n");
			printf("\n M�dia: %d \n",nvmed);
		}
		else{
			printf("\n 2� �poca \n");
			printf("\n M�dia: %d \n",nvmed);
			printf("\n Insira a nota da 2� �poca: ");
			scanf("%d",&epoca);
			
			novamed=(nota1+nota2+nota3+exame+epoca)/5;
			
			if(novamed>=5){
				printf("\n APROVADO EM 2� �POCA \n");
				printf("\n M�dia: %d \n",novamed);
			}
			else{
				printf("\n REPROVADO \n");
				printf("\n M�dia: %d \n",novamed);
			}
		}
	}
	system("pause");
}

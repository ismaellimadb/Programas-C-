#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,media,exame,epoca,nvmed,novamed;
	printf("Digite as tr�s notas correspondentes aos bimestres\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	media=(n1+n2+n3)/3;
	if(media>=7){
		printf("\nAPROVADO\n");
		printf("\nM�DIA: %.1f\n",media);
		scanf("%f",&media);
	}
	else{
		printf("\nExame\n");
		printf("\nM�DIA: %.1f\n",media);
		printf("\nInsira a nota do exame:\n");
		scanf("%f",&exame);
		
		nvmed=(n1+n2+n3+exame)/4;
		
		if(nvmed>=5){
			printf("\nAPROVADO EM EXAME\n");
			printf("\nMEDIA: %.1f\n",nvmed);			
		}
		else{
			printf("\n2� �poca\n");
			printf("\nInsira a nota da segunda �poca:\n");
			scanf("%f",&epoca);
			
			novamed=(n1+n2+n3+exame+epoca)/5;
			
			if(novamed>=5)
			{
				printf("\nAPOVADO EM SEGUNDA �POCA\n");
				printf("nM�dia: %.1f\n",novamed);
			}
			else{
				printf("\nREPROVADO\n");
				printf("\nMedia: %.1f\n",novamed);
				
			}
			
		}
	}
	system("pause");
}

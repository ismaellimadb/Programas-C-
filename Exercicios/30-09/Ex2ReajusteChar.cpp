#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario,aumento;	
	char cargo[30]= "";
	printf("Escreva seu cargo: \n");scanf("%s",&cargo);
	printf("Escreva seu sal�rio: \n");scanf("%f",&salario);
	if(strcmp(cargo,"Office_Boy")==0)
	{
		aumento=salario*1.25;
		printf("O sal�rio ser� de: %.2f\n",aumento);
	}
	else if(strcmp(cargo,"Secretaria")==0){
		aumento=salario*1.20;
		printf("O sal�rio ser� de: %.2f\n",aumento);
	}
	else if(strcmp(cargo,"Auxiliar_Administrativo")==0){
		aumento=salario*1.15;
		printf("O sal�rio ser� de: %.2f\n",aumento);
	}
	else if(strcmp(cargo,"Gerente")==0){
		aumento=salario*1.10;
		printf("O sal�rio ser� de: %.2f\n",aumento);
	}
	else{
		printf("N�o h� previs�o de reajuste para este cargo");
	}
}

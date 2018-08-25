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
	printf("Escreva seu salário: \n");scanf("%f",&salario);
	if(strcmp(cargo,"Office_Boy")==0)
	{
		aumento=salario*1.25;
		printf("O salário será de: %.2f\n",aumento);
	}
	else if(strcmp(cargo,"Secretaria")==0){
		aumento=salario*1.20;
		printf("O salário será de: %.2f\n",aumento);
	}
	else if(strcmp(cargo,"Auxiliar_Administrativo")==0){
		aumento=salario*1.15;
		printf("O salário será de: %.2f\n",aumento);
	}
	else if(strcmp(cargo,"Gerente")==0){
		aumento=salario*1.10;
		printf("O salário será de: %.2f\n",aumento);
	}
	else{
		printf("Não há previsão de reajuste para este cargo");
	}
}

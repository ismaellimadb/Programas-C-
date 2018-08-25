#include <stdio.h>
#include <string.h>
main()
{
float salario,aumento;
char cargo [30] = "";
printf("Digite seu cargo\n");scanf("%s",&cargo);
printf("Digite seu salario\n");scanf("%f",&salario);
if(strcmp(cargo,"Office_Boy")==0)
{
	aumento=salario*1.25;
	printf("O seu salario e de: %.2f",aumento);
}
else if (strcmp(cargo,"Secretaria")==0)
{
	aumento=salario*1.20;
	printf("O seu salario e de: %.2f",aumento);
}
else if (strcmp(cargo,"Auxiliar_Administrativo")==0)
{
	aumento=salario*1.15;
	printf("O seu salario e de: %.2f",aumento);
}
else if (strcmp(cargo,"Gerente")==0)
{
	aumento=salario*1.10;
	printf("O seu salario e de: %.2f",aumento);
}
else
{
	printf("Nao ha previsao de reajuste salarial para esse cargo");
}
}

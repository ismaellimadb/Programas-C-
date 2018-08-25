#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario,aumento,reajuste;
	printf("Escreva o salário: ");
	scanf("%f",&salario);
	if(salario<=750)
	{
		aumento=salario*0.05;
		reajuste=salario+aumento;
		printf("O salário será de: %.2f\n",reajuste);
	}
	else if(salario>=751&&salario<=1000)
	{
		aumento=salario*0.07;
		reajuste=salario+aumento;
		printf("O salário será de: %.2f\n",reajuste);
	}
	else if(salario>=1001&&salario<=2000)
	{
		aumento=salario*0.08;
		reajuste=salario+aumento;
		printf("O salário será de: %.2f\n",reajuste);
	}
	else if(salario>2000)
	{
		aumento=salario*0.09;
		reajuste=salario+aumento;
		printf("O salário será de: %.2f\n",reajuste);
	}
}

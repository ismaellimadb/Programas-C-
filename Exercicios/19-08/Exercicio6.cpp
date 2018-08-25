#include<stdio.h>
#include<stdlib.h>
//Aumento de 15% no salario
main()
{
	float s,au;
	printf("\nDigite o salario do funcionario\n");
	scanf("%f",&s);
	au=s*1.15;
	printf("\nO salario do funcionario aumentara para: %.1f\n\n",au);
	system("pause");
}

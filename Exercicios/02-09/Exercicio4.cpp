#include <stdio.h>
#include <stdlib.h>
main()
{
	float a,c,r1,r2;
	printf("Escreva o salario do funcionario\n");
	scanf("%f",&a);
	r1=a*1.08;
	r2=a*1.10;
	if(c=a>=1000)
	{
	printf("O salario do funcionario antes era de:\n%.2f\n",a);	
	printf("O salario do funcionario sera reajustado para:\n%.2f\n",r1);
	printf("O salario do funcionario foi reajustado em 8 por cento\n\n");	
	}
	else
	{
	printf("O salario do funcionario antes era de:\n%.2f\n",a);
	printf("O salario do funcionario sera reajustado para\n%.2f\n",r2);
	printf("O salario do funcionario foi reajustado em 10 por cento\n\n");
	}
	system("pause");
}

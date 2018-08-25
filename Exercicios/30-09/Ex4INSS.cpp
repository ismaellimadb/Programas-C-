#include <stdio.h>
#include <stdlib.h>
main()
{
	float s, inss;
	printf("Informe seu salario\n"); scanf("%f",&s);
	if (s<=1106.9)
	{
		inss=s*0.08;
	}
	else if(s<=1844.83)
	{
	inss=s*0.09;
	}
	else
	{
	inss=s*0.11;
	}
	printf("\nO valor a se pago de INSS e: %.2f",inss);
}

#include <stdio.h>
#include <stdlib.h>
main()
{
	float h,vh,d,sb,sl;
	printf("\nDigite a quantidade de horas trabalhadas\n");
	scanf("%f",&h);
	printf("\nDigite o valor da hora\n");
	scanf("%f",&vh);
	printf("\nDigite o percentual de desconto\n");
	scanf("%f",&d);
	sb=h*vh;
	sl=sb-(sb*d/100);
	printf("\nO salario bruto do funcionario e: %1.f",sb);
	printf("\nO salario liquido do funcionario e: %1.f\n\n",sl);
	system("pause");
}

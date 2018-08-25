#include<stdio.h>
#include<stdlib.h>
main()
{
float base,altura,area;
printf("\nDigite o valor da base do triangulo\n");
scanf("%f", &base);
printf("\nDigite o valor da altura\n");
scanf("%f", &altura);
area=base*altura/2;
printf("\nA area do triangulo= %2.f\n\n",area);
system("pause");
}


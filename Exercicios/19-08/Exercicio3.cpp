#include <stdio.h>
#include <stdlib.h>
main()
{
	float a,temp;
	printf("\nDigite a temperatura em graus Celsius\n");
	scanf("%f",&a);
	temp=(9*a+160)/5;
	printf("\nA temperatura em Fahrenheits e: %.1f\n",temp);
	system("pause");
}

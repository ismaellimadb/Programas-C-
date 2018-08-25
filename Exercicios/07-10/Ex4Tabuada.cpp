#include <stdio.h>
#include <math.h>
main()
{
	int num,mult,cont;
	printf("Escreva um numero inteiro\n");
	scanf("%d",&num);
	for(mult=0;mult<=10;mult++)
	{
		cont=num*mult;
		printf("\n%dX%d = %d",num,mult,cont);
	}
}

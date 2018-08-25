#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,d,m;
	printf("\nInforme sua idade em anos\n");
	scanf("%d",&a);
	m=a*12;
	d=a*365;
	printf("\nSua idade em meses e %d\n",m);
	printf("\nSua idade em dias e %d\n",d);
	system("pause");
}

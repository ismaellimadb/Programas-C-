#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Escreva três valores: ");scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c)
	{
		printf("A ordem é: %d, %d, %d",c,b,a);
	}
	else if (c>a && a>b)
	{
	printf("A ordem é: %d, %d, %d ",b,a,c);
}
	else if(c>b&&b>a)
	{
		printf("A ordem é: %d, %d, %d",a,b,c);
	}
	else if(b>a&&a>c)
	{
		printf("A ordem é: %d, %d, %d ",c,a,b);
	}
	else if(c>b&&a>c)
	{
		printf("A ordem é: %d, %d, %d ",a,b,c);
	}
else
{
	printf("A ordem é: %d, %d, %d",b,c,a);
}
}

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c,d;
	printf("Escreva três valores: ");scanf("%d %d %d",&c,&b,&a);
	if(a>b)
	{
	d=a;
	a=b;
	b=d;	
	}
   
	if(a>c)
	{
	d=a;
	a=c;
	c=d;
	}
 if (b>c)
	{
	d=b;
	b=c;
	c=d;
}
	printf("A ordem crescente é %d, %d, %d",a,b,c);
}

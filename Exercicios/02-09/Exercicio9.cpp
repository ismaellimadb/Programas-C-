#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c,maior;
	printf("Escreva três valores");scanf("%d %d %d",&a,&b,&c);
	maior=a;
	if(maior<b)
	{
		maior=b;
		printf("O numero: %d é o maior",maior);
	}
	else if (maior<c)
	{
	maior=c;
	printf("O numero: %d é o maior",maior);
}
else
{
	printf("O numero: %d é o maior",maior);
}
}

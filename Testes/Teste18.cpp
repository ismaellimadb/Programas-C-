#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite dois numeros inteiros\n");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("\nO número %d é maior que o numero %d\n",a,b);
	}
	else if(a<b)
	{
		printf("\nO número %d é menor que o número %d\n",a,b);
	}
	else if(a=b)
	{
		printf("\nOs numeros %d e %d são o mesmo número",a,b);
	}
}

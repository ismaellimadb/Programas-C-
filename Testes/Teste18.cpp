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
		printf("\nO n�mero %d � maior que o numero %d\n",a,b);
	}
	else if(a<b)
	{
		printf("\nO n�mero %d � menor que o n�mero %d\n",a,b);
	}
	else if(a=b)
	{
		printf("\nOs numeros %d e %d s�o o mesmo n�mero",a,b);
	}
}

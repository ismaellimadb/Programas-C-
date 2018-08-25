#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b,soma;
	printf("\nDigite um numero\n");
	scanf("%d", &a);
	printf("\nDigite outro numero\n");
	scanf("%d", &b);
	soma=a+b;
	printf("\nO resutado da soma e:");
	printf("\n%d + %d= %d\n",a,b,soma);
	system("pause");
}

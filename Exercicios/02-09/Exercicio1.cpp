#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b,d;
	printf("Digite dois valores\n");
	scanf("%d %d",&a,&b);
	if(d=a>b)
	{
		d=a-b;
	}
	else
	{
		d=b-a;
	}
	printf("\nA diferenca e \n%d\n\n",d);
	system("pause");
}

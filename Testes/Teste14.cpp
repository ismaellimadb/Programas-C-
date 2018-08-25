#include <stdio.h>
#include <stdlib.h>
main()
{
	float a,b,t;
	printf("Digite dois valores\n");
	scanf("%f %f",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("\nO valor do primeiro numero foi trocado pelo do segundo\n\n%.1f\n",a);
	printf("\nO valor do segundo numero foi trocado pelo do primeiro\n\n%.1f\n\n",b);
	system("pause");
}

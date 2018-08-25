#include <stdio.h>
main()
{
	int mult=0, num, result;
	printf("Informe um numero\n");scanf("%d",&num);
	while(mult<=10)
	{
		result=num*mult;
		printf("%dx%d=%d\n",num,mult,result);
		mult++;
	}
}

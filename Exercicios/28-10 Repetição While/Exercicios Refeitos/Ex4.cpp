#include <stdio.h>
main()
{
	int n=0,nu,re;
	printf("Informe um numero\n");scanf("%d",&nu);	
	while(n<=10)
	{
		re=nu*n;
		printf("%dx%d=%d\n",nu,n,re);
		n++;
	}
}

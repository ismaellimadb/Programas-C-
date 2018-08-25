#include <stdio.h>
main()
{
	int imp=1,c=0,ac=0;float media;
	while(imp<=60)
	{
		if(imp%2!=0)
		{
		ac=ac+imp;
		c=c+1;
	}
		imp++;
	}
	media=ac/c;
	printf("%.1f",media);
}

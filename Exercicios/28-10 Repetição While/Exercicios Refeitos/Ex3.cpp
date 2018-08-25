#include <stdio.h>
main()
{
	int ni=1,c=0,ac=0;float m;
	while(ni<=60)
	{
		if(ni%2!=0)
		{
			ac=ac+ni;
			c=c+1;
		}
		ni++;
	}
		m=ac/c;
		printf("%.1f",m);
}

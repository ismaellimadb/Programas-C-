#include <stdio.h>
main()
{
	int c=0,ac=0,imp=1;float m;
	
	while(imp<=60){
		if(imp%2!=0)
		{
		ac=ac+imp;
		c=c+1;
	}
	imp++;
}	
    m=ac/c;
	printf("%.1f\n",m);
}

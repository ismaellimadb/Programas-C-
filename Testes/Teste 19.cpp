#include <stdio.h>
#include <stdlib.h>
main()
{
	int c,ci=0,ac=0;float m;
	for(c=1;c<=60;c++)
	{
		if(c%2 !=0)
		{
		ac=ac+c;
		ci=ci+1;
	}
}
m=ac/ci;
printf("\nA media de numeros impares e: %.1f",m);
}

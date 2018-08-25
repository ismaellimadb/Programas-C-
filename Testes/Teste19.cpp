#include <stdio.h>
main()
{
	int c;float m;
	for(c=1;c<=60;c++)
	{
		if(c%2 !=0)
		{
			m=(c+c)/2;
		}
	}
	printf("\nA media de numeros impares e: %.2f",m);
}

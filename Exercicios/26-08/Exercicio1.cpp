#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,f;
	printf("\nDigite o numero de dias letivos\n");
	scanf("%d",&a);
	f=a*0.25;
	printf("\nO aluno pode ter:\n%d faltas\n\n",f);
	system("pause");
}

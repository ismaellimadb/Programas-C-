#include <stdio.h>
#include <stdlib.h>
main()
{
	int num=1,ac=0,c=0;float media;
	while(num!=0)
	{
		printf("Informe o numero\n");scanf("%d",&num);
		if(num%2==0&&num!=0)
		{
			ac=ac+num;
			c++;
		}
		else if(num%2!=0)
		{
			printf("O numero informado nao sera computado\n");
		}
		else{
			printf("Não houve numero par\n");
		}
	}
	media=ac/c;
	printf("O resultado da media dos numeros informados e:\n%d\n",media);
	system("pause");
}

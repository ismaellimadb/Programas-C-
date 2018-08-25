#include <stdio.h>
#include <stdlib.h>
main()
{
	int np,cnp=0,acnp;float med;
	while(np!=0)
	{
		printf("Informe um numero par ou digite 0 para sair\n");scanf("%d",&np);
		if(np!=0)
		{
			if(np%2==0)
			{
				acnp=acnp+np;
				cnp++;
			}
			if(np%2!=0)
			{
				printf("Esse numero nao sera computado\n");
			}
		}
		else
		{
			if(cnp!=0)
			{
				med=acnp/cnp;
				printf("A media de numeros pares informados e:\n%.2f\n",med);
			}
		}
	}
	system("pause");
}

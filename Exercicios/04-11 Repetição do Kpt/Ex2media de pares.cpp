#include <stdio.h>
#include <stdlib.h>
main()
{
	int np=1,acnp,cnp=0;float med;
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
				printf("O numero informado nao sera computado\n");
			}
		}
		else
		{
			if(cnp!=0)
			{
				med=acnp/cnp;
				printf("Resultados\n");
				printf("A media dos numeros pares oferecidos e:\n%.2f\n",med);
			}
	}
}
	system("pause");
}

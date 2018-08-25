#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex=1,c=1,ch=0,cm=0;float medm,alt,acam,maior=0,menor=3;
	while(c<=10)
	{
		printf("Informe sua altura\n");scanf("%f",&alt);
		printf("Informe seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
		if(sex==1)
		{
			cm++;
			acam=acam+alt;
		}
		if(sex==2)
		{
			ch++;
		}
		if(alt>maior)
		{
			maior=alt;
		}
		if(alt<menor)
		{
			
			menor=alt;
		}
	c++;
	}
	printf("A maior altura do grupo e:\n%.2f\n",maior);
	printf("A menor altura do grupo e:\n%.2f\n",menor);
	medm=acam/cm;
	printf("A media de altura das mulheres e:\n%.2f\n",medm);
	printf("O numero de homens e:\n%d\n",ch);
	system("pause");
}

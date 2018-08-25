#include <stdio.h>
#include <stdlib.h>
main()
{
	int ch=0,cm=0,cg,sex;float medm,acam,alt,maior=0,menor=3;
	for(cg=1;cg<=10;cg++)
	{
		printf("Informe seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
		printf("Informe sua altura\n");scanf("%f",&alt);
		if(sex==1)
		{
			acam=acam+alt;
			cm++;
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
	}
	printf("A maior altura do grupo e:\n%.2f\n",maior);
	printf("A menor altura do grupo e:\n%.2f\n",menor);
	medm=acam/cm;
	printf("A media da altura das mulheres e:\n%.2f\n",medm);
	printf("O numero de homens e:\n%d\n",ch);
	system("pause");
}

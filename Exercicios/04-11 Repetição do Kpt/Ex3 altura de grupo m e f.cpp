#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex=1,c=1,ch=0,cm=0;
	float media,alt,ac,maior=0,menor=3;
	while(c<=10)
	{
		printf("Informe o seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
		printf("Informe a sua altura\n");scanf("%f",&alt);
		
		if(sex==1)
		{
			ac=ac+alt;
			cm=cm+1;
		}
		if(sex==2)
		{
			ch=ch+1;
		}
		if(alt>maior)
		{
			maior=alt;
		}
		if(alt<menor)
		{
			menor=alt;
		}
		c=c+1;
	}
	printf("\n\nA maior altura do grupo e:\n%.2f\n",maior);
	printf("A menor altura do grupo e:\n%.2f\n",menor);	
	media=ac/cm;
	printf("A media de altura das mulheres e:\n%.2f\n",media);
	printf("A quantidade de homens e:\n%d\n\n",ch);
	system("pause");
}



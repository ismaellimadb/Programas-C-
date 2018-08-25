#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex,c=1, ch=0,acm,cm=0;float media,alt,maior=0,menor=3;
	while(c<=10)
	{
		printf("Informe o seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
		printf("Informe a sua altura\n");scanf("%f",&alt);
		if(sex==1)
		{
			acm=acm+alt;
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
	printf("\n\nA maior altura e de:\n%.2f\n",maior);
	printf("A menor altura e de:\n%.2f\n",menor);
	media=acm/cm;
	printf("A media de altura das mulheres e de:\n%.2f\n",media);
	printf("A quantidade de homens no grupo e de:\n%d\n\n",ch);
	system("pause");
}

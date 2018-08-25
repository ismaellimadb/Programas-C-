#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex=0,ch=0,crsh=0,crnh=0,cm=0,crsm=0,crnm=0,crs=0,crn=0,cg=1,res=0;float psi,pno;
	while(cg<=20)
	{
		printf("Informe o seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
		printf("Voce gostaria de um novo produto no mercado?\n1-Sim\n2-Nao\n");scanf("%d",&res);
		if(sex==1)
		{
			cm=cm+1;
			if(res==1)
			{
				crsm=crsm+1;
			}
			if(res==2)
			{
				crnm=crnm+1;
			}
		}
		if(sex==2)
		{
			ch=ch+1;
			if(res==1)
			{
				crsh=crsh+1;
			}
			if(res==2)
			{
				crnh=crnh+1;
			}
		}
		if(res==1)
		{ 
			crs=crs+1;
		}
		if(res==2)
		{
			crn=crn+1;
		}
		cg=cg+1;
	}
	printf("O numero de pessoas que responderam sim foi de:\n%d\n",crs);
	printf("O numero de pessoas que responderam nao foi de:\n%d\n",crn);
	psi=crsm*100/cm;
	pno=crnh*100/ch;
	printf("O numero de mulheres que responderam sim foi de:\n%.2f%%\n",psi);
	printf("O numero de homens que responderam nao foi de:\n%.2f%%\n",pno);
	system("pause");
}

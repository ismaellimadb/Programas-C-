#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex,ins,id,ch=0,cm=0,cmxp=0,chv=0,menor=120,xp,ach,chid=0;float phv,medh;
	while(id!=0)
	{
	printf("Informe sua Idade\n");scanf("%d",&id);
	printf("Informe seu numero de inscricao\n");scanf("%d",&ins);
	printf("Informe seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
	printf("Possui experiencia no servico?\n1-Sim\n2-Nao\n");scanf("%d",&xp);
	if(id!=0)
	{
		if(sex==1)
		{
			cm++;
			if(id<35&&xp==1)
			{
				cmxp++;
			}
			if(id<menor&&xp==1)
			{
				menor=id;
			}
		}
		if(sex==2)
		{
			ch++;
			if(xp==1)
			{
				ach=ach+id;
				chid++;
			}
			if(id>45)
			{
				chv++;
			}
		}
	}
		if(id==0)
		{
			printf("O numero de candidatas do sexo feminino e:\n%d\n",cm);
			printf("O numero de candidatos do sexo masculino e:\n%d\n",ch);
			if(ach!=0&&chid!=0)
			{
			medh=ach/chid;
			phv=chv*100/ch;
			}
			else{
				menor=0;
			}
			printf("A idade media dos homens com experiencia e:\n%.2f\n",medh);
			printf("O numero de mulheres com experiencia e menores de 35 anos e:\n%d\n",cmxp);
			printf("A porcentagem de homens com mais de 45 anos e:\n%.2f%%\n",phv);
			printf("A menor idade entre as mulheres com experiencia e:\n%d\n\n",menor);
		}
	}
	system("pause");
}

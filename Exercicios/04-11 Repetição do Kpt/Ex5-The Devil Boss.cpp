#include <stdio.h>
#include <stdlib.h>
main()
{
	int ins=1,sex,id=0,xp,acm,chv=0,chi=0,cmn=0,cm=0,achi,ch=0,menor=120;float medh,phv;
	while(ins!=0)
	{
	printf("\n\n\nInforme seu numero de incricao\n");scanf("%d",&ins);
	printf("Informe sua idade\n");scanf("%d",&id);
	printf("Informe seu sexo\n1-Feminino\n2-Masculino\n");scanf("%d",&sex);
	printf("Experiencia em servico?\n1-Sim\n2-Nao\n");scanf("%d",&xp);
	if(sex==1)
	{
		cm=cm+1;
		if(id<=35&&xp==1)
		{
			cmn=cmn+1;
			if(id<menor){
			menor=id;
			}
		}
	}
	if(sex==2)
	{
		ch=ch+1;
		if(xp==1)
		{
			achi=achi+id;
			chi=chi+1;	
		}
		if(id>=45)
		{
			chv=chv+1;
		}
	}
}
	if(ins==0){
		printf("\n\n\nfim de programa");
	printf("\n\n\nO numero de candidatos do sexo feminino e:\n%d\n",cm);
	printf("O numero de candidatos do sexo masculino e:\n%d\n",ch);
	if(achi!=0&&chv!=0){
	medh=achi/chi;
	phv=chv*100/ch;
}
else{
	menor=0;
}
	printf("A idade media de homens com experiencia e:\n%.2f\n",medh);
	printf("A porcentagem de homens com 45 anos ou mais e\n%.2f%%\n",phv);
	printf("O numero de mulheres com idade inferior a 35 anos e com experiencia e\n%d\n",cmn);
	printf("A menor idade entre as mulheres com experiencia e: \n%d\n\n",menor);
	system("pause");
}
}

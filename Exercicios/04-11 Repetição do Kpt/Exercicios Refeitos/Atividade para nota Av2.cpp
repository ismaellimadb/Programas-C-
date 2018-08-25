#include <stdio.h>
#include <stdlib.h>
main()
{
	int vot,cv=0,c1=0,c2=0,c3=0,c4=0,nul=0,bra=0;float pvb,vpn;
	while(vot!=0)
	{
		printf("\nInforme seu candidato\n1-Candidato 1\n2-Candidato 2\n3-Candidato 3\n4-Candidato 4\n5-Nulo\n6-Branco\n0-Resultados\n");scanf("%d",&vot);
		if(vot!=0)
		{
			if(vot==1)
			{
				c1++;
			}
			if(vot==2)
			{
				c2++;
			}
			if(vot==3)
			{
				c3++;
			}
			if(vot==4)
			{
				c4++;
			}
			if(vot==5||vot>6)
			{
				nul++;
			}
			if(vot==6)
			{
				bra++;
			}
		}
		else{
			if(nul!=0)
			{
				vpn=nul*100/cv;
			}
			if(bra!=0)
			{
				pvb=bra*100/cv;
			}
			printf("\nResultados:\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\nNulos: %d\nBrancos: %d\n",c1,c2,c3,c4,nul,bra);
			printf("A porcentagem de votos nulos e: %.2f%%\n",vpn);
			printf("A porcentagem de votos brancos e: %.2f%%\n\n",pvb);
		}
		cv++;
	}
	system("pause");
}

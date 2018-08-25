#include <stdio.h>
#include <stdlib.h>
main()
{
	int voto,cv1=0,cv2=0,cv3=0,cv4=0,cv5=0,cv6=0,acv5,acv6,cg=0; float pvn,pvb;
	while(voto!=0)
	{
		printf("\nInforme o numero que voce gostaria de votar\nCandidato 1\nCandidato 2\nCandidato 3\nCandidato 4\n5-Nulo\n6-Branco\n\n");
		scanf("%d",&voto);
		if(voto==1)
		{
			cv1=cv1+1;
		}
		if(voto==2)
		{
			cv2=cv2+1;
		}
		if(voto==3)
		{
			cv3=cv3+1;
		}
		if(voto==4)
		{
			cv4=cv4+1;
		}
		if(voto==5)
		{
			acv5=acv5+voto;
			cv5=cv5+1;
		}
		if(voto==6)
		{
			acv6=acv6+voto;
			cv6=cv6+1;
		}
		cg=cg+1;
}
	if(voto==0){
	printf("\nO total de votos do Candidato 1 foi:\n%d\n",cv1);
	printf("O total de votos do Candidato 2 foi:\n%d\n",cv2);
	printf("O total de votos do Candidato 3 foi:\n%d\n",cv3);
	printf("O total de votos do Candidato 4 foi:\n%d\n",cv4);
	printf("O total de votos em branco foi:\n%d\n",cv5);
	printf("O total de votos nulos foi:\n%d\n",cv6);
	pvn=cv5*100/cg;
	pvb=cv6*100/cg;
}
	printf("A porcentagem de votos nulos sobre o total de votos foi:\n%.2f%%\n",pvn);
	printf("A porcentagem de votos em branco sobre o total de votos foi:\n%.2f%%\n\n",pvb);
	system("pause");
}

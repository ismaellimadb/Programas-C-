/*Atividade Av2
Nome: Ismael de Carvalho Rocha Lima; RA:3016107241; Curso: Tecnologia em Banco de Dados;
Nome: Rennan Darabi Alves Anastacio; RA:3016107397; Curso:  Tecnologia em Sistemas para Internet;
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	int voto=1,cv1=0,cv2=0,cv3=0,cv4=0,cv5=0,cv6=0,cvg=0; float pvn,pvb;
	while(voto!=0)
	{
	printf("\n\nInforme o numero que voce gostaria de votar\n1-Candidato 1\n2-Candidato 2\n3-Candidato 3\n4-Candidato 4\n5-Nulo\n6-Branco\n0-Apuracao dos resultados\n\n");
	scanf("%d",&voto);
	if(voto!=0)
	{
		if(voto==1)
		{
			cv1++;
		}
		if(voto==2)
		{
			cv2++;
		}
		if(voto==3)
		{
			cv3++;
		}
		if(voto==4)
		{
			cv4++;
		}
		if(voto==5||voto>6)
		{
			cv5++;	
		// Se o nº digitado não estiver nas opções, será adicionado aos nulos
		}
		if(voto==6)
		{
			cv6++;
		}
	}
	else{
	if(cv5!=0){
	pvn=cv5*100/cvg;
}
	if(cv6!=0)
	{
	pvb=cv6*100/cvg;
}
	printf("\nO total de votos do Candidato 1 foi:\n%d\n",cv1);
	printf("O total de votos do Candidato 2 foi:\n%d\n",cv2);
	printf("O total de votos do Candidato 3 foi:\n%d\n",cv3);
	printf("O total de votos do Candidato 4 foi:\n%d\n",cv4);
	printf("O total de votos nulos foi:\n%d\n",cv5);
	printf("O total de votos em branco foi:\n%d\n",cv6);
	printf("A porcentagem de votos nulos foi:\n%.2f%%\n",pvn);
	printf("A porcentagem votos em branco foi:\n%.2f%%\n\n",pvb);
}
	cvg++;
	}
	system("pause");
}


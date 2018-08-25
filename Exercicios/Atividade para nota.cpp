#include <stdio.h>
#include <stdlib.h>

main()
{
	float n1,n2,media,aluno,aprovados,reprovados,result,rst;
	
	for(aluno=1;aluno<=10;aluno++)
	{
	printf("Escreva as duas notas do aluno:\n");scanf("%f %f",&n1,&n2);
		media=(n1+n2)/2;
		
		if(media>=6){
			printf("\nAPROVADO\n");
			aprovados=aprovados+1;
			result=aprovados;
		}
		else{
			printf("\nREPROVADO\n");
			reprovados=reprovados+1;
			rst=reprovados;
		}

	}
printf("\n\nA quantidade de alunos aprovados e reprovados e:");
printf("\n%.0f APROVADOS",result);
printf("\n%.0f REPROVADOS\n\n",rst);
system("pause");
}

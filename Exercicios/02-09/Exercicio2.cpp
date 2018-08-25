#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float dl,f,limite;
	printf("Digite o numero de dias letivos\n");scanf("%f",&dl);
 	printf("Digite o numero de faltas do aluno\n");scanf("%f",&f);
	limite=dl*0.25;
	if(f>limite)
	{
	printf("\nO aluno esta reprovado\n\n");	
	}	
	else
	{
	printf("\nO aluno esta aprovado\n\n");
	}
	system("pause");
}


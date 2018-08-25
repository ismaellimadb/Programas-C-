#include <stdio.h>
#include <stdlib.h>
main()
{
	int id=1,cm=0,sex=1,tc=1;
	while(id!=0)
	{
		printf("Informe a sua idade ou digite 0 para o resultado\n");scanf("%d",&id);
		if(id!=0)
		{
			printf("Informe seu sexo:\n1-Masculino\n2-Feminino\n");scanf("%d",&sex);
			printf("Informe o tempo da sua carteira de habilitacao\n");scanf("%d",&tc);
		}
		if(sex==2&&id>=24&&id<=30&&tc>=3)
		{
			cm=cm+1;
		}
		else{
			printf("Resultado:\n\n");
		}
	}
	printf("A quantidade de mulheres entre 24 e 30 anos com tempo da carteira acima de 3 anos e:\n%d\n",cm);
	system("pause");
}

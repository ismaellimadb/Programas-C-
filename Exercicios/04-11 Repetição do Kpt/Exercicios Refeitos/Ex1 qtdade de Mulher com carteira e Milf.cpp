#include <stdio.h>
#include <stdlib.h>
main()
{
	int sex=1,id=1,cf=0,tc=1;
	while(id!=0)
	{
		printf("Informe sua idade ou digite 0 para sair\n");scanf("%d",&id);
		if(id!=0)
		{
			printf("Informe seu sexo\n1-Masculino\n2-Feminino\n");scanf("%d",&sex);
			printf("Informe o tempo da sua carteira de habilitacao\n");scanf("%d",&tc);
		}
		if(sex==2&&id>=24&&id<=30&&tc>=3)
		{
			cf=cf+1;
		}
		else{
			printf("Resultado\n\n");
		}
	}
	printf("A quantidade de mulheres com a carteira de habilitacao superior a tres anos com idade entre 24 e 30 anos e:\n%d\n\n",cf);
	system("pause");
}

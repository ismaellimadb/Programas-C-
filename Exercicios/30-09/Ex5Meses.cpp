#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Informe um n�mero de 1 a 12\n");scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("\nJaneiro\n");break;
		
		case 2:
			printf("\nFevereiro\n");break;
		case 3:
			printf("\nMar�o\n");break;
		case 4:
			printf("\nAbril\n");break;
		case 5:
			printf("\nMaio\n");break;
		case 6:
			printf("\nJunho\n");break;
		case 7:
			printf("\nJulho\n");break;
		case 8:
			printf("\nAgosto\n");break;
		case 9:
			printf("\nSetembro\n");break;
		case 10:
			printf("\nOutubro\n");break;
		case 11:
			printf("\nNovembro\n");break;
		case 12:
			printf("\nDezembro\n");break;
		default:
			printf("\nN�mero Invalido\n");
	}
}

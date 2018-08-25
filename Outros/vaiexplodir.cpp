#include <stdio.h>


main(){
	int sexo=1, tp = 0, idade,cont=0;
	 
	 
	 
	 do{
	 	
	 printf("Informe seu sexo: \n 1 - Homem \n 2 - Mulher \n 0 - Sair \n");scanf("%d",&sexo);
	 printf("Informe a quantidade de anos que sua Carteira de Habilitacao possui: \n");scanf("%d",&tp);
	 printf("Informe sua idade: \n");scanf("%d",&idade);			

	 
	 if(idade>=24&&idade<=30&&tp>3){
	cont=cont+1;
	printf("\n %d mulhere(s) \n \n",cont);
	}
	
	if(idade=0){
		printf("Processo finalizado");
		printf("\n %d mulheres",cont);
		sexo=0;
		
	}
}
	while(sexo==2);

}


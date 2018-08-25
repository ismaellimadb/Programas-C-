#include <stdio.h>

main(){
	int sexo,resposta,sim,simf=0,simm=0,nao,naof=0,naom=0,contw=0,contm=0,pessoa=1,resultadop,resultadon;
	
	
		do{
		printf("Informe seu sexo:\n 1 - Feminino\n 2 - Masculino\n");scanf("%d",&sexo);
		printf("Informe sua resposta:\n 1 - Sim\n 2 - Nao\n");scanf("%d",&resposta);
		
		
		if(sexo==1){	
		contw=contw+1;
		
		if(resposta==1){
			simf=simf+1;
		}
		if(resposta==2){
			naof=naof+1;
		
		}
	}
	    if(sexo==2){
		contm=contm+1;
		
	    if(resposta==1){
			simm=simm+1;
		}
		if(resposta==2){
			naom=naom+1;
				
		}
	}
	pessoa=pessoa+1;	
	}
	while(pessoa<=20);
	resultadop=simf*100/contw;	
	resultadon=naom*100/contm;
	sim=simf+simm;
	nao=naof+naom;
	printf("\nA quantidade de pessoas que responderam sim foi: %d\n",sim);
	printf("A quantidade de pessoas que respondera nao foi: %d\n",nao);
	printf("A porcentagem de mulheres que responderam sim foi: %d%%\n",resultadop);
	printf("A porcentagem de homens que responderam nao foi: %d%%\n",resultadon);
}

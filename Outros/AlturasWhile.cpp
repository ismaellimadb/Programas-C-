#include <stdio.h>
#include <stdlib.h>
main(){
	int sexo,cont=1,contw=0,contm=0;
	float altura,ac,maior=0,menor=3,media;
	
	while(cont<=10){
	
	printf("\nDigite seu sexo: \n 1 - Feminino \n 2 - Masculino\n");scanf("%d",&sexo);
	printf("\nDigite sua altura: ");scanf("%f",&altura);
	 	
		 
    if(sexo==1){
	ac=ac+altura;
	contw=contw+1;
}

	
	if(sexo==2){
	contm=contm+1;
	}
	
	 if(altura>maior){
	 	maior=altura;
	 }
	if(altura<menor){
	 	menor=altura;
	 }	
		

	cont=cont+1;
	
}
printf("A maior altura do grupo e: %.2f \n",maior);
printf("A menor altura do grupo e: %.2f \n",menor);
media=ac/contw;

printf("A media de altura das mulheres e: %.2f \n",media);
printf("A quantidade de homens e: %d ",contm);
system("pause");

}

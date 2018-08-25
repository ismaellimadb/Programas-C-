#include <stdio.h>

main(){
	int voto=1,cc1=0,cc2=0,cc3=0,cc4=0,nulo=0,branco=0,contv=0;
	float pn,pb;
	
	while(voto!=0){
		printf("Informe seu voto:\n 1 - Candidato 1\n 2 - Candidato 2\n 3 - Candidato 3\n 4 - Candidato 4\n 5 - Voto Nulo\n 6 - Voto em Branco\n 0 - Finalizar\n");scanf("%d",&voto);
		if(voto!=0){
	    	if(voto==1){
			cc1++;
		    }
		    if(voto==2){
			cc2++;
	    	}
		    if(voto==3){
			cc3++;
		    }
		    if(voto==4){
			cc4++;
		    }
		    if(voto==5||voto>6){
			nulo++;
			//Se o usuário informar um número que não seja os indicados (0 a 6), automaticamente passa a ser contado como voto nulo
		    }
		    if(voto==6){
			branco++;
		    }
}
	else{
     if(nulo!=0){
     	
    pn=nulo*100/contv;
}
    if(branco!=0){
    pb=branco*100/contv;
}

    printf("Resultado da Votacao: \n");
    printf("Candidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\nVotos Nulos: %d\nVotos em Branco: %d\n",cc1,cc2,cc3,cc4,nulo,branco);
    printf("Porcentagem de votos nulos: %.2f%%\n",pn);
    printf("Porcentagem de votos em branco: %.2f%%\n",pb);
	}
	contv++;
	
	}
	
}

#include <stdio.h>

main()
{
	float peso,altura,imc;
	printf("Informe sua altura\n");scanf("%f",&altura);
	printf("Informe seu peso\n");scanf("%f",&peso);
	imc=peso/(altura*altura);
	if(imc<18.5)
	{
		printf("Voce esta abaixo do peso!\n");
		printf("Seu IMC e de: %.2f",imc);
	}
	else if(imc>=18.5&&imc<=24.9)
	{
		printf("Parabens! voce esta com peso normal\n");
		printf("Seu IMC e de %.2f",imc);
	}
		else if(imc>=25.0&&imc<=29.9)
	{
		printf("Voce esta acima do peso!\n");
		printf("Seu IMC e de %.2f",imc);
	}
		else if(imc>=30.0&&imc<=34.9)
	{
		printf("Voce esta acima do peso! Obesidade Grau 1\n");
		printf("Seu IMC e de %.2f",imc);
	}
		else if(imc>=35.0&&imc<=39.9)
	{
		printf("Voce esta acima do peso! Obesidade Grau 2\n");
		printf("Seu IMC e de %.2f",imc);
	}
		else if(imc>40)
	{
		printf("Voce esta acima do peso! Obesidade Grau 3\n");
		printf("Seu IMC e de %.2f",imc);
	}
	
}

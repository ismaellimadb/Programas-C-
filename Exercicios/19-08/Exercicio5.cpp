#include <stdio.h>
#include <stdlib.h>
main()
{
	float t,v,gas,dis;
	printf("\nDigite o Tempo da viagem em horas\n");
	scanf("%f",&t);
	printf("\nDigite a Velocidade em Km/h\n");
	scanf("%f",&v);
	dis=t*v;
	gas=dis/2;
	printf("\nA distancia percorrida pelo automovel foi: %1.f Km\n",dis);
	printf("\nFoi consumido %.1f litros de combustivel na viagem\n\n",gas);
	system("pause");
}

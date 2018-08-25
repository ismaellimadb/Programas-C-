#include <stdio.h>
main(){
int num,mt=0,result;
printf("Escreva um numero para ser exibido a tabuada\n");scanf("%d",&num);
while(mt<=10)
{
result=num*mt;
printf("%dx%d=%d\n",num,mt,result);
mt++;
}
}

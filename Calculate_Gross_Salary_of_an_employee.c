#include<stdio.h>
int main()
{
	float basic,hra,da,pf,gs;
	scanf("%f%f%f",&basic,&hra,&da);
	pf=(basic*12)/100;
	printf("%.2f
",pf);
	gs=hra+da+pf+basic;
	printf("%.2f",gs);
	
}
#include<stdio.h>
int main()
{
	int x,r,rev=0;
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		rev=(rev*10)+r;
		x=x/10;
	}
	printf("%d",rev);
}

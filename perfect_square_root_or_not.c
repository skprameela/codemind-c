#include<stdio.h>
int main()
{
    int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n==i*i)
		{
			printf("True");
			break;
		}
	}
	if(n!=i*i)
	{
		printf("False");
	}
}
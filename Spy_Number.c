#include<stdio.h>
int main()
{
    int n,sum=0,pdt=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        pdt=pdt*r;
    }
    if(sum==pdt)
    {
        printf("Spy Number");
        }
        else
        {
        printf("Not Spy Number");
        }
}
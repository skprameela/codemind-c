#include<stdio.h>
int main()
{
    int r,n;
    scanf("%d",&n);
    r=n%3;
    if(n%3==0)
    printf("NORMAL");
    else if(n%3==1)
    printf("HUGE");
    else
    printf("SMALL");
    
}
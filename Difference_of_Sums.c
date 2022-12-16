#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=0,sq=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        sq+=i*i;
    }
    printf("%d",abs(sum*sum-sq));
}
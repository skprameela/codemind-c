#include<stdio.h>
int largest(int a,int b,int c)
{
    if(a>b)
    {
        return 1;
    }
    else if(b>c)
    {
        return 0;
    }
    else if(c>b)
    {
        return 1;
        
    }
    else if(c>a)
    {
        return 0;
    }
    else if(a>c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    largest(a,b,c);
    if(a>b)
    {
        printf("%d",a);
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else if(c>b)
    {
        printf("%d",c);
    }
    else if(c>a)
    {
        printf("%d",c);
    }
    else if(a>c)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}
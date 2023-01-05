#include<stdio.h>
int main()
{
    int h,m,min;
    scanf("%d",&m);
    h=m/60;
    min=m%60;
    printf("%d Hour(s) %d Minute(s)",h,min);
}
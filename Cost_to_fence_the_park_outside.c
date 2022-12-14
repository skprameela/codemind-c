#include<stdio.h>
int main()
{
    int A,R,L,B,W,C;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A=(B+2*W)*(L+2*W)-(B*L);
    R=C*A;
    printf("%d",R);
}
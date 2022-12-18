#include<stdio.h>
int main()
{
    int l1,l2,b1,b2,w,a1,a2,c,n;
    scanf("%d%d%d%d",&l1,&b1,&w,&c);
    a1=l1*b1;
    b2=b1+(2*w);
    l2=l1+(w*2);
    a2=l2*b2;
    n=a2-a1;
    printf("%d",(n*c));
}
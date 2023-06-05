#include<stdio.h>
int main()
{
    int n,a=0,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a=a*10+r;
        n/=10;
    }
    printf("%d",a);
}
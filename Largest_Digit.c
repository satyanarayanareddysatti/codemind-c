#include<stdio.h>
int main()
{
    int n,r,id=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(id<r)
        {
            id=r;
        }
        n=n/10;
    }
    printf("%d",id);
}
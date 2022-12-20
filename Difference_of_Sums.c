#include<stdio.h>
int main()
{
    int n,c=0,d=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=c+(i*i);
    }
    for(j=1;j<=n;j++){
        d=d+j;
    }
    printf("%d",(d*d)-c);
}
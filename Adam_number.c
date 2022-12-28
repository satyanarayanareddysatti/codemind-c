#include<stdio.h>
int main()
{
int n,re=0,r,sqw,rem,s=0;
scanf("%d",&n);
int sq = n*n;//144
while(n!=0)
{
    r=n%10;
    re=re*10+r;
    n=n/10;
}
sqw=re*re;//441
while(sqw!=0){
    rem=sqw%10;
    s=s*10+rem;//144
    sqw/=10;
}
if(sq==s)
printf("True");
else
printf("False");
}
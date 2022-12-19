#include<stdio.h>
int main()
{
    int n,rev=0,rem,c;
    scanf("%d",&n);
    c=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(c==rev)
    printf("True");
    else
    printf("False");
}
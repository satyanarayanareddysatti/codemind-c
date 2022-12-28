#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,rem,sum=0,q,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        q=a[i];
        sum=0;
        while(a[i]!=0){
            rem=a[i]%10;
            sum=sum*10+rem;
            a[i]/=10;
        }
        if(q==sum)
        c++;
    }
    if(c==n)
    printf("1");
    else
    printf("0");
    
}
#include<stdio.h>
int main()
{
    int n,i,a=1,b=2;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n+1;i++){
        if(i%2!=0){
                 a=(a*2)+1;
            printf("%d ",a);
        }else{
            b=(b*3)+2;
    printf("%d ",b);
        }
    }
    
}
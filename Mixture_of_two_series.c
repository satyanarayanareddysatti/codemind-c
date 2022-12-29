#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a=2,b=3,k1=0,k2=0,a1,b1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%2==0){
                 a1=pow(a,k1);
            printf("%d ",a1);
            k1++;
        }else{
            b1=pow(b,k2);
    printf("%d ",b1);
    k2++;
        }
    }
    
}
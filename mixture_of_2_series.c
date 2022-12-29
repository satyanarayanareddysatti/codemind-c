#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a=1,b=2,a1,b1;
    scanf("%d",&n);
    printf("0 0 ");
    for(i=3;i<=n+1;i++){
        if(i%2==0){
            printf("%d ",a);
            a++;
        }else{
    printf("%d ",b);
    b=b+2;
        }
    }
    
}
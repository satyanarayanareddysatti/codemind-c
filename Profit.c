#include<stdio.h>
int main()
{
    int cp,sp,a;
    scanf("%d%d",&cp,&sp);
    if(sp>cp){
        a=sp-cp;
        printf("Profit");
    }else{
        printf("Loss");
    }
}
#include<stdio.h>
int main()
{
    int h,n,i;
    scanf("%d%d",&n,&h);
    for(i=1;i<=h;i=i+2){
    printf("%d x %d = %d
",n,i,(n*i));
}
}
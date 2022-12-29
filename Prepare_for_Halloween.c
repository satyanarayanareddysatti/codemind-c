//choco==bar*x;1p=2 bars;==>1p==2xsweet
//can==piece*y;1p=5 pieces;==>1p==5ysweet
#include<stdio.h>
int main()
{
    int i,j,t;
    scanf("%d",&t);
    int a[t][2];
    for(i=0;i<t;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        if(a[i][0]*2>a[i][1]*5)
        printf("Chocolate
");
         else if(a[i][0]*2==a[i][1]*5)
        printf("Either
");
         else if(a[i][0]*2<a[i][1]*5)
        printf("Candy
");
    }
    
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][2],j,i;
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
 }
    }
    for(i=0;i<n;i++){
        if(a[i][0]>a[i][1]){
            printf("LOSS
");
        }else if(a[i][0]<a[i][1]){
            printf("PROFIT
");
            }else if(a[i][0]=a[i][1]){
                printf("NEUTRAL
");
    }
    }
}

#include<stdio.h>
int main()
{
    int u;
    float c,tb,sr;
    scanf("%d",&u);
    if(u<=199)
    c=u*1.20;
    else if(u>=200&&u<400)
    c=u*1.50;
    else if(u>=400&&u<600)
    c=u*1.80;
    else if(u>=600)
    c=u*2.00;
    if(c>400)
    sr=c*.15;
    else
    sr=100;
    tb=c+sr;
    printf("%.2f",tb);
    
}
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i,c=0;
    scanf("%s",&ch);
    for(i=0;ch[i]!=NULL;i++){
        if(ch[i]=='1')
        {
            c++;
        }
    }
    printf("%d",c);
}
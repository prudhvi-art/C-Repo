#include<stdio.h>
int main()
{
    int x,i,v;
    scanf("%d",&x);
    for(i=1;i<=12;i++)
    {
        v=x*i;
   
        printf("%d x %d = %d\n",x,i,v);
    }
}
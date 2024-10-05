#include<stdio.h>
int main()
{
    int x,i,n;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        x=i*n;
        printf("%d x %d = %d\n",n,i,x);
    }
}
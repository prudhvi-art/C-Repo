#include<stdio.h>
int main()
{
    int x,i,n,r;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        x=i*n;
        printf("%d x %d = %d\n",n,i,x);
    }
}
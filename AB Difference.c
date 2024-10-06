#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int g=a+b;
    int f=a*b;
    if(f>g)
    {
    printf("%d",f-g);
}
else
{
    printf("%d",g-f);
}
}
#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=a+b+(a*b);
    if(i==111)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
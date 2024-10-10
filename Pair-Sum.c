#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int n=x%100;
    int h=x/10;
    int y=n+h;
    printf("%d",y);


}
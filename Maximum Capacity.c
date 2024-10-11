#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int k=x*y;
    if(k<=500 && x<=8)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
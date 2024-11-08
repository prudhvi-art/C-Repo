#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w<=3)
    {
        printf("BRONZE");
    }
    else if(w>3 && w<6)
    {
        printf("SILVER");
    }
    else
    {
        printf("GOLD");
    }
}
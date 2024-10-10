#include<stdio.h>
int main()
{
    char f;
    scanf("%c",&f);
    if(f>='A' && f<='Z')
    {
        int p=f-'A'+1;
        printf("%d",p);
    }
    else if(f>='a' && f<='z')
    {
        int p=f-'a'+1;
        printf("%d",p);
    }
}
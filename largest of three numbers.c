#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is grater");
    }
    else if(b>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is largest");
    }
    }
    

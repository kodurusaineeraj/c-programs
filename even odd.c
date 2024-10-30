#include<stdio.h>
void main()
{
    int a,tem;
    printf("enter a value:");
    scanf("%d",&a);
    tem=a%2;
    switch(tem)
    {
        case 0:printf("Even number");
        break;
        case 1:printf("Odd number");
        break;
        default:printf("invalid input");
        break;
    }
}
    

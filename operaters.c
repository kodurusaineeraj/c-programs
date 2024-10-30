#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter a,b,op values");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("%d",a+b);
        break;
        case'-':printf("%d",a-b);
        break;
        case'*':printf("%d",a*b);
        break;
        case'/':printf("%d",a/b);
        break;
        case'%':printf("%d",a%b);
        break;
        default:printf("invalid statement");
        break;
    }
}

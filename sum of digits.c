#include<stdio.h>
void main()
{
    int sum,n,rem;
    printf("enter n values");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum of %d",sum);
}

#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum=0;
    printf("enter the n value");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+pow(i,3);
        }
    }
    printf("the sum is %d",sum);
}

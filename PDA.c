#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    printf("PERFECT");
    else if(sum>n)
    printf("ABUNDANT");
    else
    {
        printf("DEFICIENT");
    }
}
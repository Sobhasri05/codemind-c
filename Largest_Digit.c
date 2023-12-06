#include<stdio.h>
int main()
{
    int n,rem,i=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(i<rem)
        {
            i=rem;
        }
        n=n/10;
    }
    printf("%d",i);
}
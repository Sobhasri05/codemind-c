#include<stdio.h>
int lastDigit(int n)
{
    return n%10;
}
int isEven(int n)
{
    int digit=lastDigit(n);
    do
    {
        if(digit%2!=0)
        {
          return 0;  
        }
        n/=10;
        digit=lastDigit(n);
    } while(n!=0);
    return 1;
}
int isOdd(int n)
{
    int digit=lastDigit(n);
    do
    {
        if(digit%2==0)
        {
            return 0;
        }
        n/=10;
        digit=lastDigit(n);
    }while(n!=0);
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isEven(n))
    {
        printf("Even
");
    }
    else if(isOdd(n))
    {
        printf("Odd
");
    }
    else
    {
        printf("Mixed
");
    }
}
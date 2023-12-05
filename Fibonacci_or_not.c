#include<stdio.h>
int main()
{
    int first=0,second=1,third,i,n,flag=0;
    scanf("%d",&n);
    third=first+second;
    while(third<=n)
    {
        if(third==n)
        {
            flag=1;
            break;
        }
        //13
        first=second;
        second=third;
        third=first+second;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
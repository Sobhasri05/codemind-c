#include<stdio.h>
int main()
{
    float X,Y,a;
    float c;
    scanf("%d%d",&X,&Y);
    a=Y-X;
    c=((a*100)/X);
    printf("%.2f",c);
    
}
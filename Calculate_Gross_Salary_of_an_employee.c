#include<stdio.h>
int main()
{
    float bs,hra,da,gross;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf=(12*bs)/100;
    gross=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gross);
}
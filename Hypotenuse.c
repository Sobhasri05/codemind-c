#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    double h=sqrt((a*a)+(b*b));
    printf("%.2lf
",h);
}
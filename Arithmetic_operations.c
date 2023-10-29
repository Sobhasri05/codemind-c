#include<stdio.h>
#include<math.h>
int main()
{
    int a=10,b=13,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum:%d
",c);
    c=a-b;
    printf("Difference:%d
",c);
    c=a*b;
    printf("Product:%d
",c);
    c=a/b;
    printf("Quotient:%d
",c);
    c=a%b;
    printf("Remainder:%d
",c);
}
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter 4 Number of which the greatest is to be finded\n");
    scanf("%d",& a);
    scanf("%d",& b);
    scanf("%d",& c);
    scanf("%d",& d);
    if(a>b && a>c && a>d)
    e=a;
    else if(b>a && b>c && b>d)
    e=b;
    else if(c>a && c>b && c>d)
    e=c;
    else
    e=d;  
    printf("The Greatest Number is %d", e);
}

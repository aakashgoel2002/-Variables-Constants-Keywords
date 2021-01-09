#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter Principl Ammount ");
    scanf("%f", &p);
    printf("Enter Rate ");
    scanf("%f", &r);
    printf("Enter the time in months ");
    scanf("%f", &t);
    printf("The Simple Intrest calculated is %f", (p*r*t)/100);
    return 0;
}

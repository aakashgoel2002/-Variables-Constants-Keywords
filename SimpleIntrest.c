#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter the Principl: ");
    scanf("%f",&p);
    printf("Enter the Rate: ");
    scanf("%f",&r);
    printf("Enter the time(in months): ");
    scanf("%f",&t);
    printf("Simple Intrest: %f", (p*r*t)/100);
    return 0;
}

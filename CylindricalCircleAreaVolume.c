#include<stdio.h>
int main(){
    float r,h,pi=3.14;
    printf("Enter the Radius of the Circle: ");
    scanf("%f",&r);
    printf("The Area of the Circle is: %f\n", r*r*pi );
    printf("Enter the Height of the Cylinder: ");
    scanf("%f",&h);
    printf("The Volume of Cylinder is: %f\n", pi*r*r*h);
    return 0;


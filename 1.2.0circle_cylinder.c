#include<stdio.h>
int main(){
    float r,h,pi=3.14;
    printf("Enter the Radius of the Circle: ");
    scanf("%f",&r);
    printf("The Area of the Circle is: %f\n", r*r*pi );
    printf("Enter the Height of cylinder: ");
    scanf("%f",&h);
    printf("The volume of cylinder is: %f\n", pi*r*r*h);
    return 0;
}

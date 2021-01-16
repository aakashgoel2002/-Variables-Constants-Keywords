#include<stdio.h>
int main(){
    float r,h,pi=3.14;
    printf("Enter the Radius of circle: ");
    scanf("%f",&r);
    printf("The Area of circle is: %f\n", r*r*pi );
    printf("Enter the height of cylinder: ");
    scanf("%f",&h);
    printf("The volume of cylinder is: %f\n", pi*r*r*h);
    return 0;
}

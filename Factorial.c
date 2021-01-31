#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the Number whose factorial is to be calculated ");
    scanf("%d",& n);
    int i;
    for(i=n;i>=1;i--){
        fact*=i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}

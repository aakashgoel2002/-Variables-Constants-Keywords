#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("Enter the value of Nth element\n");
    scanf("%d",&n);
    printf("The Value of Fibonacci series at nTH element is %d",fib(n));
}
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    {
        int ret=fib(n-1)+fib(n-2);
        return ret;
    }
}

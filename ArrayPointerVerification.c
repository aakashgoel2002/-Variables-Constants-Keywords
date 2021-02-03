#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr=arr;
    ptr=ptr+2;
    if(&arr[2]==ptr)
    printf("These Points have same memory location\n");
    else
    printf("These do not have same memory location\n");
    return 0;
}


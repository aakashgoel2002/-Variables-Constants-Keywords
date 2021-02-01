#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    char sp[100];
    printf("Enter 2 Strings: \n");
    gets(st);
    gets(sp);
    int s=strcmp(st,sp);
    if(s==0)
    printf("Both are Equal");
    else
    printf("They are Unequal");
    return 0;
}

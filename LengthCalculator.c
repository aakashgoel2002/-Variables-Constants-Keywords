#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len;
    printf("Enter a String: \n");
    gets(s);
    len=strlen(s);
    printf("%d is its length",len);
    return 0;
}

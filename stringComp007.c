#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[] = "abc";
    char str2[] = "ABCg";
    printf("%d",strcmp(str1,str2));
    return;
}
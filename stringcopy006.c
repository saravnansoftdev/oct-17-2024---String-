#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[5] = "abcd";
    char str2[5] = "efg";
    printf("%s",strcpy(str2,str1));
    return;
}
#include<stdio.h>
// #include<string.h>
int len(char []);

int main(void)
{
    char str[] = "1234567";
    // int len = strlen(str);
    int l = len(str);
    printf("%d",l);
    return;
}

int len(char str[])
{
    int i;
    for(i=1; str[i]; i++);
    return i; 
}
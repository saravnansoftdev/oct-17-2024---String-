#include<stdio.h>

int main(void)
{
    // char ch[6] = {'a','b','c','d','e','\0'};
    // char ch[7] = "welcome";
    char *ch = "hello";
    int i;
    for(i=0; i<sizeof(ch)/sizeof(ch[0]); i++)
        printf("%c ",ch[i]);
    return;
}
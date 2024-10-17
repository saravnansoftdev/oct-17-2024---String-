#include<stdio.h>

int main(void)
{
    char ch[6] = {'a','b','c','d','e','\0'};
    int i;
    for(i=0; i<5; i++)
        printf("%c ",ch[i]);
    return;
}
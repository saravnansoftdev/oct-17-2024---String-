#include<stdio.h>

struct abc
{
    int n;
    char ch;
    // float f;  
    char ch1;  
};


int main(void)
{
    struct abc x;
    x.ch = 'p';
    // x.f = 5.4;
    x.n = 45;
    // printf("%d %f %c",x.n,x.f,x.ch);
    printf("\n%d",sizeof(x));
    return;
}
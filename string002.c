#include<stdio.h>
#include<string.h>
void fun(char[]);
void fun1(char*);

int main(void)
{
    char ch[10] = "WORLD";
    char *str = "WORLD";
    // strrev(ch);
    // printf("%s",strrev(str));
    // fun(ch);
    fun1(str);
    return;
}
void fun1(char* str)
{
    // printf("%s",*str);
    while(*str)
    {
        printf("%c ",*str++);
    }
}
void fun(char ch[])
{
    printf("%s",ch);
}
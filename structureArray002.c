#include<stdio.h>

struct str
{
    int n;
    char ch;
};

int main()
{
    struct str x[2];
    //defining data to the structure...
    // x[0] = (struct str){10,'k'};
    // x[1] = (struct str){20,'l'};
    int i;
    printf("enter the datas: \n");
    for(i=0; i<2; i++)
    {
        scanf("%d%c",&x[i].n,&x[i].ch);
    }
    for(i=0; i<2; i++)
    {
        printf("%d %c\n",x[i].n,x[i].ch);
    }
    // printf("%d",sizeof(x));
    // x[0].ch = 'a';
    // x[0].n = 10;
    // x[1].ch = 'b';
    // x[1].n = 20;
    // int i; 
    // for(i=0; i<4; i++)
    // {
    //     printf("%c",x[i].ch);
    // }
    return;
}
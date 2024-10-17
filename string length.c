#include<stdio.h>
void STRREV(char[]);
int main()
{
	char ch[] = "123456789";
	int i;
	for(i=0; ch[i]; i++);
	printf("%d\n",i);
	STRREV(ch);
	return;
}


char* STRREV(char ch[])
{
	int i,j;
	for(i=1; i<=sizeof(ch)/sizeof(ch[0]); i++);
	char str[i];
	j = i;
	i = 0;
	for(j; j>=0; j--)
	{
		str[i] = ch[j];
	}
	return str;
//	printf("%d\n",i);
}

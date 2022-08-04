#include<stdio.h>
#include<string.h>
void fun(char *p)
{
int i;
printf("%s",p);
}
int main()
{
int i,len;
char a[]="0120370";
void (*fp)(char *b);
fp=fun;
fp(a);
}





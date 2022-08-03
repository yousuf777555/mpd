#include<stdio.h>
int main()
{
int a=5,b=6,c=8;
int *p[3];
p[0]=&a;
p[1]=&b;
p[2]=&c;
printf("%d",*p[2]);
}


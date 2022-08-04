#include<stdio.h>
int *fun(int *a,int *b)
{
*a= *a + *b;
return a;
}

int main()
{
int a=3,b=45;
int *p=fun(&a,&b);
printf("%d",*p);
}



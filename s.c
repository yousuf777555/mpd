#include<stdio.h>
void fun(int a);
void fun1(void);
int a=89;
int main()
{
fun(a);
printf("%d",a);
fun1();
printf("%d",a);
}
void fun(int a)
{
a++;
}
void fun1(void)
{
a++;
}



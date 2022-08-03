#include<stdio.h>
void fun(void);
int main()
{
extern int a;
 printf("%d",a);
fun();
fun12();
}
int a=213213;
void fun(void)
{
int a=121;
printf("%d\n",a);
}

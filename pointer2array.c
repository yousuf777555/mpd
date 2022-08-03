#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int *p=a;
int (*p1)[5]=&a;
printf("%p\n",p);
printf("%p\n",p1);
p++;
p1++;
printf("%p\n",p);
printf("%p\n",p1);
}

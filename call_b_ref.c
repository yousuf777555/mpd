#include<stdio.h>
void fun(int *p)
{
*p= *p * *p;//multiplying using deferencing operator
}

int main()
{
int a=12;
fun(&a);//passing the address
printf("%d",a);

}

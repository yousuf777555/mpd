#include<stdio.h>
void fun1(int a,int b)
{
	printf("addition of two numbers %d\n",a+b);
}
void fun2(int a,int b)
{
	printf("sub of two numbers %d\n",a-b);
}
void fun3(int a,int b)
{
	printf("mul of two numbers %d\n",a*b);
}

int main()
{
int a=2,b=3;
void (*fp[3])(int a,int b);//array of function pointer
(fp)[0]=fun1;
(fp)[1]=fun2;//assigning address of function
(fp)[2]=fun3;

(*fp[0])(a,b);//calling function using function pointer
(*fp[1])(a,b);
(*fp[2])(a,b);

}


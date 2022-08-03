#include<stdio.h>
int main()
{
	int a=10;
	printf("%d\t",a);
	{
		int a=12;
		printf("%d\n",a);
	}
	{
		int a=30;
		printf("%d\n",a);
	}
}

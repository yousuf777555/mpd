#include<stdio.h>
int main()
{
int a[]={1,23,2,3,4},i,pos;
printf("enter the position");
scanf("%d",&pos);//reading the position
for(i=pos;i<5;i++)
{
a[i]=a[i+1];//swifting element
}
for(i=0;i<4;i++)
{
printf("%d\t",a[i]);
}
}


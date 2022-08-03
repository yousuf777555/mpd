#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5},key,flag=0;
printf("enter the element to search");
scanf("%d",&key);
for(int i=0;i<5;i++)
{
if(a[i]==key)
{
flag=1;
break;
}
}
if(flag==1)
printf("element found");
else
{
printf("not found");
}
}

#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int mid,low=0,up=4,i;
int item;
scanf("%d",&item);
while(low<=up)
{
mid=(low+up)/2;
if(item>mid)
low=mid+1;
else if(item<mid)
up=mid-1;
else if(item==mid)
{
printf("%d element found",item);
break;
}
}
}


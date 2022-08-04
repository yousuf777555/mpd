#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int i,len,temp;
len=sizeof(a)/sizeof(a[0]);//finding size
for(i=0;i<len/2;i++)
{
temp=a[i];              //swapping
a[i]=a[len-i-1];
a[len-i-1]=temp;
}
for(i=0;i<len;i++)
{
printf("%d\n",a[i]);
}
}


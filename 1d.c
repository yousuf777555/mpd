#include<stdio.h>
int main()
{
int a[]={1,23,34,4,5,66,};
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++)
{
printf("%d",a[i]);
}

int b[2][3]={1,2,3,4,5,6};
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
printf("%d",b[i][j]);
}
}

int c[2][2][2]={1,2,3,4,5,6,7,8};
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
for(int k=0;k<2;k++)
{
printf("%d",c[i][j][k]);
}
}
}
}


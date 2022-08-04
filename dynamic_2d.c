#include<stdio.h>
#include<stdlib.h>
int main()
{
int (*a)[3];//pointer to an array
int i,j;
a=(int (*)[3])malloc(3*3*sizeof(int));//dynamically allocating memory
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  printf("%d",a[i][j]);
  }
  }
}
  



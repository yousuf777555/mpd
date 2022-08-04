#define s <stdio.h>
#define s1 <stdlib.h>
#include s        //using micro 
#include s1
int i;
int main()
{
int *p=(int *)malloc(5*sizeof(int));//dynamically allocating memory
if(p==NULL)
{
printf("array not allocatt");
exit(0);
}
else
{
for(i=0;i<5;i++)
{
scanf("%d",(p+i));
}
}
for(i=0;i<5;i++)
{
printf("%d\n",*(p+i));
}
}

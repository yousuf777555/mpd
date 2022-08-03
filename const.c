#include<stdio.h>
int main()
{
const int a =10;
int const b=15;
printf("%d%d\n ",a,b);

/*pointer to const data*/
const int *p=&a;//data can't be changed
//*p=11; error 
p=&b;
printf("%d%d\n",a,b);

/*const pointer*/
int *const n = &a;
*n=14;//possible
//n=&b;//gives error
printf("%d%d\n",a,b);

/*const data  const pointer*/
const int *const m =&a;
//*m=12;gives error
//m=&b;

}

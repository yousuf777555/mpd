#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	printf("enter the elements of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after bubble sort\n");
	 for(i=0;i<10;i++)
        {
                printf("%d\n",a[i]);
        }
}

#include<stdio.h>
main()
{
	int a[10],i,j,n,temp;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The original elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n The sorted elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
}

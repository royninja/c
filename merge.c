/**program to marge to sorted list as input and in output a new list will be generated */
#include<stdio.h>
void main()
{
	int array1[10],array2[10],array[20],i,j,n1,n2,n;
	printf("\nEnter the size of array 1: ");
	scanf("%d",&n1);
	printf("\nEnter the elements of sorted array1: ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("\nEnter the size of array2: ");
	scanf("%d",&n2);
	printf("Enter the elements of sorted array2: ");
	for(j=0;j<n2;j++)
	{
		scanf("%d",&array2[j]);
	}
	n=n1+n2;
	if(array1[n1-1] < array2[n2-1])
	{
		for(i=0;i<n1; i++)
		{
			array[i]=array1[i];
		}
		for(i=n1,j=0;i<n,j<n2;i++,j++)
		{
			array[i] = array2[j];
		}
	}
	else
	{
		for(i=0;i<n2;i++)
		{
			array[i] = array2[i];
		}
		for(i=n2,j=0; i<n,j<n1; i++,j++)
		{
			array[i] = array1[j];
		}
	}
	printf("\nAfter merging the sorted lists\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",array[j]);
	}
}

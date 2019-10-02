// Program Written By Nirbhay Kaushik
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,n;		// First Array Declaration and Local Variables
	int arr1[10],j=0,size=0;	// Second Array Declaration and Local Variables
	clrscr();
	printf("Enter how many elements do you want in array : ");
	scanf("%d",&n); 		// Input for 'n' variable
	printf("Enter the elements of arrays : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);      // Loop for array input
	}
	size=n-1;
	printf("Reverse Array : ");
	for(i=size;i>=0;i--,size--)
	{
		arr1[j]=arr[size];          	// Logical Loop For Reversing Array
		j++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr1[i]);      // Print Reverse Array
	}
	getch();
}
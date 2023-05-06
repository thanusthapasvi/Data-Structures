#include <stdio.h>
#include <conio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int array[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(array[j]>array[j+1])
	swap(&array[j],&array[j+1]);
}

void printarray(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",array[i]);
		printf("\n");
	}
}

int main()
{
	int array[] = {89,32,20,-15,113};
	int size = sizeof(array)/sizeof(array[0]);
	clrscr();
	bubblesort(array,size);
	printf("Sorted array :\n");
	printarray(array,size);
	getch();
	return 0;
}

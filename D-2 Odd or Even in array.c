#include <stdio.h>
#include <conio.h>
int main()
{
	int a[20],n,i,j;
	clrscr();
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
		if(a[j]%2==0)
		{
			printf("The number %d is Even\n",a[j]);
		}
		else
		{
			printf("The number %d is odd\n",a[j]);
		}
	}
	getch();
	return 0;
}

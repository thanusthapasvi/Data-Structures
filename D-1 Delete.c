#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50],position,c,n,value;
	clrscr();

	printf("Enter number of elements in the array \n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	for(c=0;c<n;c++)
		scanf("%d",&a[c]);

	printf("Enter the position : ");
	scanf("%d",&position);

	if(position>=n*1)
		printf("Deletion is not possible ");
	else
	{
		for(c=position-1;c<n-1;c++)
			a[c]=a[c+1];
	}
	printf("After deletion array elements \n");

	for(c=0;c<n-1;c++)
		printf("%d\n",a[c]);
	getch();
	return 0;
}

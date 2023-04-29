#include <stdio.h>
#include <conio.h>
int main()
{
	int a[50],position,c,n,value;
	clrscr();
	printf("Enter the nummber of elements in the array :");
	scanf("%d",&n);
	printf("Enter %d elements \n",n);

	for(c=0;c<n;c++)
		scanf("%d",&a[c]);

	printf("Please enter the location where you want to insert an new element :");
	scanf("%d",&position);

	printf("Please enter the value :");
	scanf("%d",&value);

	for(c=n-1;c>=position-1;c--)
		a[c+1]=a[c];

	a[position-1]=value;

	printf("Resultant array is \n");
	for (c=0;c<=n;c++)
		printf("%d\n",a[c]);
	getch();
	return 0;
}

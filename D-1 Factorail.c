#include <stdio.h>
#include <conio.h>
int main()
{
	int f=1,i=1,n;
	clrscr();
	printf("Enter a number for factorial :");
	scanf("%d",&n);
	do
	{
		f=f*i;
		i=i++;
	}while(i<=n);
	printf("Factorial of given number is : %d",f);
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
int fib(int n);
int main()
{
	int n,i;
	clrscr();
	printf("Enter the number of terms: ");
	scanf("%d",&n);

	printf("Fibonacci series is \n");
	for(i=0;i<n;i++)
		printf("%d\t",fib(i));
	getch();
	return 0;
}
int fib(int n)
{
	if (n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

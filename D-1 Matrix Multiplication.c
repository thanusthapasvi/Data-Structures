#include <stdio.h>
#include <conio.h>
main()
{
	int a[2][2],b[2][2],m[2][2],i,j,k;
	clrscr();
	printf("Enter the elements of the 1st matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter the elements of the 2nd matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m[i][j]=0;
			for(k=0;k<2;k++)
				m[i][j]=m[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("The multiplication of given two matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",m[i][j]);
		}printf("\n");
	}
	getch();
	return 0;
}

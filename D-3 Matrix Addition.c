#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],m[10][10],r,c,i,j,k;
	printf("Enter size of the matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements of the first matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter elements of the second matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
	printf("Matrix Multiplication\n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				m[i][j]=0;	
				for(k=0;k<c;k++)
				{
					m[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",m[i][j]);
			}
			printf("\n");
		}	
}

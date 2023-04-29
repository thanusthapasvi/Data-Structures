#include <stdio.h>
#include <conio.h>
int bsearch(int a[],int ,int);
void main()
{
	int a[20],pos,n,i,k;
	clrscr();
	printf("Enter the size of the array :");
	scanf("%d",&n);
	printf("Enter the elements of array :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the key value : ");
	scanf("%d",&k);
	pos=bsearch(a,n,k);
		if (pos!=-1)
			printf("Search element is in position %d ",pos);
		else
			printf("Search element is not in array ");
		getch();

}
	int bsearch(int a[],int n,int k)
	{
		int lb=0,ub,mid;
		lb=0;
		ub=n-1;
		while(ub>=lb)
		{
			mid=(lb+ub)/2;
			if(k<a[mid])
				ub=mid-1;
			else if(k>a[mid])
				lb=mid+1;
				return(mid);
		}
	return -1;
	}

#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,e,f,g,i,t=0,p;
	clrscr();
	again:
	printf("\n\t\tEnter the marks of 7 subjects !\n");
	printf("\nEnter marks of 1st Subject : ");
	scanf("%d",&a);
	printf("\nEnter marks of 2nd Subject : ");
	scanf("%d",&b);
	printf("\nEnter marks of 3rd Subject : ");
	scanf("%d",&c);
	printf("\nEnter marks of 4th Subject : ");
	scanf("%d",&d);
	printf("\nEnter marks of 5th Subject : ");
	scanf("%d",&e);
	printf("\nEnter marks of 6th Subject : ");
	scanf("%d",&f);
	printf("\nEnter marks of 7th Subject : ");
	scanf("%d",&g);
	if(a<=100&&b<=100&&c<=100&&d<=100&&e<=100&&f<=100&&g<=100)
{
	t=a+b+c+d+e+f+g;
	printf("\ntotal marks in 7 subjects are   : %d\n",t);
	p=t/7;
	printf("Your percentage is \t\t: %d\n",p);
	printf("You are ");
	if(p>=80)
		printf("Distinction !");
	else if(p>=60&&p<=79)
		printf("First division");
	else if(p>=45&&p<=59)
		printf("Second division");
	else if(p>=32&&p<=44)
		printf("third division");
	else
		printf("Fail !!");
}
	else
{
	printf("Marks cant exceed 100 !\nEnter marks again\n");
	goto again;
}
	getch();
	return 0;
}

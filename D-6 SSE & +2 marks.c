#include <stdio.h>
#include <conio.h>
int main()
{
	float a,b,t1,t2,p1,p2;
	printf("Enter total marks of SSE : ");
	scanf("%f",&t1);
	printf("Enter your SSE total marks : ");
	scanf("%f",&a);
	printf("Enter total marks of +2 :");
	scanf("%f",&t2);
	printf("Enter your +2 total marks : ");
	scanf("%f",&b);
	p1=(a/t1)*100;
	p2=(b/t2)*100;
	if(a>=80&&b>=80)
		printf("Congrats ! You are a distinction ");
	else if(a>=70&&a<80&&b>=70&&b<80)
		printf("Congrats ! You are a first class");
	else if(a>=60&&a<70&&b>=60&&b<70)
		printf("Congrats ! You are a second class");
	else if(a>=50&&a<60&&b>=50&&b<60)
		printf("Congrats ! You are a Third class");
	else
		printf("You are failed");
	getch();
	return 0;
}

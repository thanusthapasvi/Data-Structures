#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b;
	int c,d;
	clrscr();
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	printf("Enter a value for choice");
	scanf("%d",&c);

switch(c)
{
	case 1: d=a+b;printf("Addition of a and b is %d",d);break;
	case 2: d=a-b;printf("Subraction of a and b is %d",d);break;
	case 3: d=a*b;printf("Multiplication of a and b is %d",d);break;
	case 4: d=a/b;printf("Division of a and b is %d",d);break;
	case 5: d=a%b;printf("rememder of a and b is %d",d);break;
	default:printf("Error 404 not found");break;
}
	getch();
	return 0;
}

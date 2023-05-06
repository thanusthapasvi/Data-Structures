#include <stdio.h>
#include <conio.h>
#define SIZE 4

int top=-1,inp_array[SIZE] ;
void push();
void pop();
void show();

int main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\nPerform operation on the stack :");
		printf("\n1. Push the element\n2. Pop element\n3. show\n4. End");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:show();break;
			case 4:exit(0);break;
			default:printf("\nInvalid choice ");break;
		}
	}
}

void push()
{
	int x;
	if(top==SIZE-1)
	{
		printf("\nOver Flow !!");
	}
	else
	{
		printf("\nEnter the element to be added onto the stack: ");
		scanf("%d",&x);
		top=top+1;
		inp_array[top]=x;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nUnderflow !!");
	}
	else
	{
		printf("\nPopped element : %d ",inp_array[top]);
		top=top-1;
	}
}

void show()
{
	int i;
	if(top==-1)
	{
		printf("\nUnderflow !!");
	}
	else
	{
		printf("\nElements present in the stack : \n");
		for(i=top;i>=0;--i)
			printf("\t\t\t%d\n",inp_array[i]);
	}printf("\n");
}

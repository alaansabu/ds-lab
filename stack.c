#include<stdio.h>
void push(void);
void pop(void);
void display(void);
int top=-1,stack[100],n,choice,x,i;
int main()
{
	printf("enter the size of the stack(maximum 100):\n");
	scanf("%d",&n);
	do
	{
		printf("\n\noperations in stack are:\n1. push\n2. pop\n3. display\n4. exit");
		printf("\nchoose a menu from above:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("program finished\n");
				break;
			}
			default:
			{
				printf("please enter a number between 1&4\n");
			}
		}
	
	}
	while(choice!=4);
return 0;
}
void push(void)
{
	
	if(top>=n)
	{
		printf("\nSTACK IS FULL\n");
	}
	else
	{
		printf("enter element to push:");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
		printf("%d was pushed\n",stack[top]);

		
	}
	
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflow");
	}
	else
	{
		printf("%d is poped out\n",stack[top]);
		top=top-1;
	}
}
void display()
{	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
}

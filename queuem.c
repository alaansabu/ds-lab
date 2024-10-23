#include<stdio.h>
int front,rear,x[100],choice,n,i,it;
void enqueue();
void dequeue();
void display();
void main()
{
front=-1;
rear=-1;
printf("Enter the limit:\n");
scanf("%d",&n);
printf("Choices are :\n");
printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4.EXIT");
	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("exit");
			break;
		default:
			printf("ENTER A VALID CHOICE 1-4");
		}
	}
	while(choice!=4);
}
	void enqueue()
	{
		if(rear==n-1)
		{
			printf("QUEUE IS FULL");
		}
		else
		{
		if(rear==-1&&front==-1)
		{
		front=front+1;
		}
		rear++;
		printf("enter the value:\n");
		scanf("%d",&it);
		x[rear]=it;
		}
	}
	void dequeue()
	{
		if(front==-1)
		{
			printf("QUEUE IS EMPTY\n");
		}
		else
			it=x[front];
			if(front==rear)
			{
			front=-1;
			rear=-1;
			}
			else
			{
			front=front+1;
			}
	}
	void display()
		{
			{
				for(i=front;i<=rear;i++)
				{ 
					printf("%d\n",x[i]);
				}
			}
		}
			
			

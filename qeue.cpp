#include<stdio.h>
#define MAX 5
struct Queue
{
	int a[MAX];
	int front,rear;
}q;
void init()
{
	q.front=-1;
	q.rear=-1;
}
int isempty()
{
	if(q.front==-1 || q.front>q.rear)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(q.rear==MAX-1)
	return 1;
	else
	return 0;
}
void insert(int num)
{

	if(isfull())
	{
		printf("queue is overflow:");
	}
	else
	{
		if(q.front==-1)
		
			q.front=0;
	
		q.rear++;
		q.a[q.rear]=num;
	}
}
void deleteq()
{
	int val;
	if(isempty())
	{
		printf("queue is underflow");
	}
	else
	{
		val=q.a[q.front];
		q.front++;
	printf("%d\t ",val);
	}
	
}
int peek()
{
	return q.a[q.front+1];
}
void disp()
{
	int i;
	for(i=q.front;i<=q.rear;i++)
	{
		printf("%d\t",q.a[i]);
	}
}
int main()
{
	int ch,num;
	init();
	do
	{
	printf("\n1-insert \n2-delete \n3-peek \n4-display  ");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	
	{
		case 1:printf("Enter number:");
   	           scanf("%d",&num);
		       insert(num);
		       break;
		case 2:deleteq();
		       break;
		case 3:printf("\n enter elenment=%d",peek());
		       break;
	   	case  4:disp();
		       break;       
	}
}while(ch<5);
}

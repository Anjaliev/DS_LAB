#include<stdio.h>
#define MAX 50
int q[20],ch,n,rear=-1,front=-1,i;
void insert()
{
int item;
if (rear==MAX-1)
{
printf("Queue Overflow \n");
}
else
{
if (front==-1)
front=0;
printf("Inset the element in queue: ");
scanf("%d",&item);
rear=rear+1;
q[rear]=item;
}
}
void delete()
{
if(front==-1||front>rear)
{
printf("Queue Underflow \n");
return ;
}
else
{
printf("Element deleted from queue is : %d\n", q[front]);
front=front+1;
}
}
void display()
{
int i;
if (front==-1)
printf("Queue is empty \n");
else
{
printf("Queue is : ");
for (i=front;i<=rear;i++)
printf("%d ", q[i]);
printf("\nFront element is: %d ", q[front]);
printf("\nRear element is: %d ", q[rear]);
printf("\n");
}
}
int main()
{
  while(ch != 4) 
   {  
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit \nEnter your choice:\n ");  

        scanf("%d",&ch);  
        switch(ch) 
        {  
            case 1: 
               
                insert();  
                break;  
            
            case 2: 
               
                delete();  
                break;  
              
            case 3:
              
                display();  
                break;  
              
            case 4:
              
                printf("Exit\n");  
                break;   
              
            default:
              
                printf("Enter valid option");  
            
            }
            }  
return 0;
}


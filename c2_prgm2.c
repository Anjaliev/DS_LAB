#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;


int isFull() 
{
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) 
  return 1;
  return 0;
}


int isEmpty() 
{
  if (front == -1) 
  return 1;
  return 0;
}


void enQueue(int element) 
{
  if (isFull())
    printf("\n Queue is full!\n");
  else 
  {
    if (front == -1) 
    front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("\n Inserted :%d", element);
  }
}


int deQueue() 
{
  int element;
  if (isEmpty()) 
  {
    printf("\n Queue is empty ! \n");
    return (-1);
  } 
  else 
  {
    element = items[front];
    if (front == rear) 
    {
      front = -1;
      rear = -1;
    } 
   
    else 
    {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element : %d \n", element);
    return (element);
  }
}


void display() 
{
  int i;
  if (isEmpty())
    printf(" \n Empty Queue!\n");
  else 
  {
    printf("\n Front : %d and element=%d \n", front,items[front]);
    printf("\n Items : ");
    for (i = front; i != rear; i = (i + 1) % SIZE) 
    {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\n Rear : %d and element=%d\n", rear,items[rear]);
  }
}

int main() 
{
int n,ch;
  while(ch != 4) 
   {  
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit \nEnter your choice: ");  

        scanf("%d",&ch);  
        switch(ch) 
        {  
            case 1:  
                printf("Enter the element to insert:");
                scanf("%d",&n);
                   
                enQueue(n);  
                break;  
            
            case 2:    
                deQueue();  
                break;  
              
            case 3:  
                display();  
                break;  
              
            case 4:  
                printf("Exit\n");  
                break;   
              
            default:  
                printf("Invalid Option!");  
            }
            }  
return 0;
}


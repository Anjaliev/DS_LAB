#include<stdio.h>
#include<stdlib.h>
int main()
{
int top=-1,size;
printf("Enter the size of stack:");
scanf("%d",&size);
int stack[size],choice,value;
while(1)
{
printf("\n Enter your choice: \n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(top==size-1)
{
printf("Stack is overflow");
}
else
{
printf("Enter the value to push;");
scanf(" %d",&value);
top++;
stack[top]=value;
}
break;
case 2:
if(top==-1)
{
printf("stack is underflow");
}
else
{
top--;
}
break;
case 3:
if(top==-1)
{
printf("Stack is empty");
}
else
{
for(int i=top;i>=0;i--)
printf(" %d",stack[i]);
}
break;
case 4:
exit(0);
default:
printf("Invalid option");
break;
}
}
return 0;
}


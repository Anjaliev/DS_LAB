#include<stdio.h>
int main()
{
int a[100],n,s,flag=0;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int ch,first,last,mid;
while(1)
{
    printf("\n Enter your choice:\n 1.Linear Search \n 2.Binary Search \n 3.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the element to be searched:\n");
scanf("%d",&s);
for(int i=0;i<n;i++)
{
if(a[i]==s)
{
printf("Element found at position:\t %d \n",i+1);
flag=1;
}
}
if(flag==0)
{
printf("Element not found\n");
}
break;
case 2:
printf("Enter the element to be searched\n");
scanf("%d",&s);
first=0;
last=n-1;
flag=0;
while(first<=last)
{
mid=(first+last)/2;
if(s==a[mid])
{
flag=1;
break;
}
else if(s>a[mid])
{
first=mid+1;
}
else
{
last=mid-1;
}
}
if(flag==0)
printf("\n The number is not found");
else
printf("\n The number is found and its position is: %d",mid+1);
break;
case 3:
exit(0);
default:
printf("Invalid Option!");
break;
    }
}
return 0;
}
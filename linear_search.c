#include<stdio.h>
int main()
{
int size,key;
printf("Enter the size for array:");
scanf("%d",&size);
int arr[size];
printf("\nEnter the elements of the array :");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the elment you have to find :");
scanf("%d",&key);

int found =0,position=0;
for(int i=0;i<size;i++)
{
if(key==arr[i])
{
found=1;
position=i+1;
}
}
if(found==1)
{
printf("The key element %d is found at %d.",key,position);
}
else
{
printf("The key element is not found.");
}
return 0;
}

#include<stdio.h>
int main()
{
int layer;
printf("Enter the number of layers :\n");
scanf("%d",&layer);
for(int i=0;i<layer;i++)
{
for(int j=0;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
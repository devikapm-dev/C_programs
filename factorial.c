#include<stdio.h>
int factorial(int n)
{
if(n==1)
{
return 1;
}
else
{
return n*factorial(n-1);
}
}

int main()
{
int number,result;
printf("Enter the number whose factorial is to be found :");
scanf("%d",&number);

result=factorial(number);
printf("Factorial of %d is %d",number,result);
return 0;
}
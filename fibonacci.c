#include<stdio.h>
int main()
{
int first_digit,second_digit,third_digit,terms,limit;
printf("Enter the first digit :");
scanf("%d",&first_digit);
printf("Enter the second digit :");
scanf("%d",&second_digit);
printf("Enter the number of terms you desire :");
scanf("%d",&terms);
limit=1;
printf("%d ",first_digit);
printf("%d ",second_digit);

while (limit<=terms-2)
{
third_digit=first_digit+second_digit;
printf("%d ",third_digit);
first_digit=second_digit;
second_digit=third_digit;
limit++;
}
return 0;
}

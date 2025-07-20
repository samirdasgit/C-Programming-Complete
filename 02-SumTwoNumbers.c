//2. Take user input for two numbers and print their sum.
#include<stdio.h>
int main()
{
  int num1, num2, sum;
  printf("Enter two numbers: \n");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  printf("Sum: %d",sum);
  return 0;
}
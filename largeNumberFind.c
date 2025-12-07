#include<stdio.h>
void main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d",&a);
  scanf("%d",&b);
  if(a > b)
  {
    printf("%d is the largest number.", a);
  }
  else if(b > a)
  {
    printf("%d is the largest number.", b);
  }
  else
  {
    printf("Both numbers are equal.");
  }
}
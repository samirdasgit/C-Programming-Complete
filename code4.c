#include<stdio.h>
void main()
{
  int age;
  printf("Enter your age: ");
  scanf("%d",&age);
  if(age>17)
  {
    printf("Voter");
  }
  else
  {
    printf("Non-Voter");
  }    
}
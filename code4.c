#include<stdio.h>
void main()
{
  int age, a;
  aa:
  printf("Enter your age: ");
  scanf("%d",&age);
  if(age>17)
  {
    printf("Voter\n");
  }
  else
  {
    printf("Non-Voter\n");
  }
  printf("1 for Continue & 0 for exit: ");
  scanf("%d",&a);
  if(a==1){
    goto aa;
  }  
}
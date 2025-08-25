#include<stdio.h>
#include<conio.h>
void main()
{
  int a, b;
  printf("Enter 1st number: ");
  scanf("%d", &a);
  printf("Enter 2nd number: ");
  scanf("%d", &b);
  if(a > b)
  {
    printf("%d is greater than %d", a, b);
  }
  else if(b > a)
  {
    printf("%d is greater than %d", b, a);
  }
  else
  {
    printf("Both are equal");
  }
  getch();    
}
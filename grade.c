#include<stdio.h>
void main()
{
  int a;
  printf("Please enter a number: "); 
  scanf("%d",&a);
  if(a>80 && a<=100)
  {
    printf("A");
  }
  else if (a>60 && a<=80)
  {
    printf("B");
  }
  else if (a>40 && a<=60)  
  {
    printf("C");
  }
  else
  {
    printf("D");
  }
}
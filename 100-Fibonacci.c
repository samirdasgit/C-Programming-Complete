#include<stdio.h>
int main()
{
  int num, a=0, b=1, i, sum=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf(" %d ",a);
  printf(" %d ",b);
  for(i=1; i<=num; i++)
  {
    sum=a+b;
    printf(" %d ",sum);
    a=b;
    b=sum;
  }
  return 0;
}
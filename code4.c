#include<stdio.h>
void main()
{
  int a, b, c;
  printf("Please enter 3 nos: ");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if(a>b && a>c)
  {
    printf("%d",a);
  }
  else if(b>a && b>c)
  {
    printf("%d",b);
  }
  else
  {
    printf("%d",c);
  }
}
//Write a C Program to check for prime.
#include <stdio.h>
void main()
{
  int num, i, is_prime = 1;
  printf("Enter a number: ");
  scanf("%d",&num);
  
  if(num<=1)
  {
    is_prime=0;
  }
  else
  {
    for(i=2; i<=num/2; i++)
    {
      if(num%i==0)
      {
        is_prime=0;
        break;
      }
    }
  }
    
  if(is_prime)
  {
    printf("%d is a prime number.\n", num);
  }
  else
  {
    printf("%d is not a prime number.\n", num);
  }
  return 0;
}



#include<stdio.h>
int main()
{
  int i,n, fibo=1;
  puts("Upto how many terms do you want fibonacci numbers?\t");
  aa:
  scanf("%d", &n);
  if(n<=0)
  {
    puts("Please enter positive number");
    goto aa;
  }
  else
  {
    printf("0, 1");
    for(i=1; i<n; i++)
    {
      printf("%d, ", fibo);
      fibo = ;

    }
  }
  return 0;
}
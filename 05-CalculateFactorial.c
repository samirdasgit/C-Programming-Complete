//5. Calculate the factorial of a given number.
#include<stdio.h>
int main(){
  int num, i, factorial = 1;
  printf("Enter a positive integer: ");
  scanf("%d",&num);
  if (num < 0) {
    printf("Factorial is not defined for negative numbers.");
  }
  else{
    for(i=1; i<=num; i++) {
      factorial*=i;
    }
    printf("Factorial of %d = %d", num, factorial);
  }
  return 0;
}
#include<stdio.h>
void main()
{
  int num;
  printf("Enter a no 1-7 to get the corresponding day of the week: ");
  scanf("%d",&num);
  switch(num)
  {
    case 1:
      printf("Sunday");
      break;
    case 2:
      printf("Monday");
      break;
    case 3:
      printf("Tuesday");
      break;
    case 4:
      printf("Wednesday");
      break;
    case 5:
      printf("Thursday");
      break;
    case 6:
      printf("Friday");
      break;
    case 7:
      printf("Saturday");
      break;
    default:
      printf("Invalid input, Please enter a number between 1 and 7");
      break;
  }
}
#include<stdio.h>
void main()
{
  int num;
  printf("Enter a no 1-7 to get the corresponding day of the week: ");
  scanf("%d",&num);
  if(num==1) {
    printf("Sunday");
  }
  else if(num==2) {
    printf("Monday");
  }
  else if(num==3) {
    printf("Tuesday");
  }
  else if(num==4) {
    printf("Wednesday");
  }
  else if(num==5){
    printf("Thursday");
  }
  else if(num==6){
    printf("Friday");    
  }
  else if(num==7) {
    printf("Saturday");    
  }
  else {
    printf("Invalid input, Please enter a number between 1 and 7");
  }
}
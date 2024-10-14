#include<stdio.h>
void main()
{
    int num1, num2, num3, biggest;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Enter the third number: ");
    scanf("%d",&num3);
    if(num1 > num2 && num1 > num3)
    {
      biggest = num1;
    }
    else if(num2 > num1 && num2 > num3){
      biggest = num2;
    }
    else{
      biggest = num3;
    }
    printf("The biggest number is: %d\n", biggest);
    return 0;
}



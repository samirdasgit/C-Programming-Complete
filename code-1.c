//Write a C program to read the marks of the student and find the average of marks.
#include<stdio.h>
void main()
{
  int num_subjects, i;
  float marks, sum = 0, average;
  
  printf("Enter the number of subjects: ");
  scanf("%d",&num_subjects);
  
  for(i=1; i<=num_subjects; i++)
  {
    printf("Enter marks of subject %d: ",i);
    scanf("%f",&marks);
    sum+=marks;
  }
  
  average = sum / num_subjects;
  printf("Average marks: %.2f\n",average);

  return 0;
}


#include<stdio.h>
void main()
{
  int n, i=1;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  do{
    printf(" %d ",i);
    i++;
  }while(i<=n);
}
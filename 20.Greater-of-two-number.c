#include<stdio.h>
int main()
{
  int n1,n2;
  printf("Enter number 1 : ");
  scanf("%d",&n1);
  printf("Enter number 2 : ");
  scanf("%d",&n2);
  if(n1>n2)
  printf("Number 1 is greater");
  else if(n2>n1)
  printf("Number 2 is greater");
  else
  printf("Similar");
  return 0;
}

//Factorial of a number
#include<stdio.h>
int main()
{
  int num;
  printf("Enter Number : ");
  scanf("%d",&num);
  for(int i=num-1;i>=1;i--)
  {
    num=num*i;
  }
  printf("factorial is : %d",num);
  return 0;
}

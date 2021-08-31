#include<stdio.h>
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d",&num);
  if(num%5==0 && num%11==0)
  printf("Divisible by both 5 and 11");
  else if(num%5==0)
  printf("Divisible by 5 only");
  else if(num%11==0)
  printf("Divisible by 11 only");
  else
  printf("Not divisible by both 5 and 11");
  return 0;
}

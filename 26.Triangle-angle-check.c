#include<stdio.h>
int main()
{
  int a1,a2,a3;
  printf("Enter angles : ");
  scanf("%d %d %d",&a1,&a2,&a3);
  int x=a1+a2+a3;
  if(x==180)
  printf("Valid");
  else
  printf("Not valid");
  return 0;
}

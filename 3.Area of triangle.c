//Area of triangle
#include<stdio.h>
int main()
{
  int base,height;
  printf("Enter Base and height : ");
  scanf("%d %d",&base,&height);
  float area=(base*height)/2;
  printf("Area : %0.2f Unit²",area);
  return 0;
}

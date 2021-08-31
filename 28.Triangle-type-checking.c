#include<stdio.h>
int main()
{
  float a,b,c;
  printf("Enter sides of triangle : ");
  scanf("%f %f %f",&a,&b,&c);
  if(a==b==c)
  printf("Equilateral");
  else if(a==b || b==c || c==a)
  printf("Isolateral");
  else
  printf("Scalene Triangle");
  return 0;
}

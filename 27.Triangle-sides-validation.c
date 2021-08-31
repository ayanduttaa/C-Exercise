#include<stdio.h>
int main()
{
  float a,b,c;
  printf("Enter sides of the triangle : ");
  scanf("%f %f %f",&a,&b,&c);
  if(a+b>c || a+c>b || b+c>a)
  printf("Valid");
  else
  printf("Not Valid");

}

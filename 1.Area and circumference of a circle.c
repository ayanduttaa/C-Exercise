//Area and circumference of a circle
#include<stdio.h>
int main()
{
  int r;
  printf("Enter radius : ");
  scanf("%d",&r);
  float area=r*r*3.14;
  float cir=2*3.14*r;
  printf("Area of circle is : %0.2f unit²\n",area);
  printf("Circumference of circle is : %0.2f unit",cir);
  return 0;
}

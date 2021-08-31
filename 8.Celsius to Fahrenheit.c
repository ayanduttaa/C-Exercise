//Celsius to Fahrenheit
#include<stdio.h>
int main()
{
  float cel;
  printf("Enter temperature in Celsius : ");
  scanf("%f",&cel);
  float f1=(cel/5)*9;
  float far=f1+32;
  printf("Temperature is Fahrenheit is : %0.2f",far);
  return 0;
}

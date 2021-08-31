//Simple Interest
#include<stdio.h>
int main()
{
  int amo,mon;
  float intr;
  printf("Enter initial amount : ");
  scanf("%d",&amo);
  printf("Enter time period (in months): ");
  scanf("%d",&mon);
  printf("Enter rate of interest : ");
  scanf("%f",&intr);
  float fin=(amo*mon*intr)/100;
  printf("The final amount will be : %0.2f/-",fin);
  return 0;
}

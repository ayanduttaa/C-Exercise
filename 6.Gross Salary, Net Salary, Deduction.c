//Gross Salary, Net Salary, Deduction
#include<stdio.h>
int main()
{
  float basic,da,hra,ma;
  float pf,pt,it;
  printf("REQUIRED INFORMATIONS- Basic Salary,DA,MA,HRA,Pf,Pt,It\n");
  printf("YOU WILL GET- Gross Salary,Deduction,Net Salary\n");
  printf("Enter Basic : ");
  scanf("%f",&basic);
  printf("Enter DA : ");
  scanf("%f",&da);
  printf("Enter HRA : ");
  scanf("%f",&hra);
  printf("Enter MA : ");
  scanf("%f",&ma);
  printf("Enter Pf : ");
  scanf("%f",&pf);
  printf("Enter Pt : ");
  scanf("%f",&pt);
  printf("Enter It : ");
  scanf("%f",&it);
  float gross=basic+da+ma+hra;
  printf("The gross salary is : %0.2f/-\n",gross);
  float ded=gross-pf-pt-it;
  printf("Deduction is : %0.2f/-\n",ded);
  float net=gross-ded;
  printf("Net salary is : %0.2f/-\n",net);
  printf("Thank You !❤");
  return 0;
}

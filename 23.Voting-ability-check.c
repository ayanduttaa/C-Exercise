#include<stdio.h>
int main()
{
  int age;
  printf("Enter Age : ");
  scanf("%d",&age);
  if(age>=1 && age<18)
  printf("You're NOT eligible for voting");
  else if(age>=18 && age<=100)
  printf("You're eligble for voting");
  else if(age>100 && age<=150)
  printf("Wish you long life. You're eligible for voting");
  else if(age<=0)
  printf("Please enter valid age");
  else
  printf("Seriously ?!");
  return 0;
}

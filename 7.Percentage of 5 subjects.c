//Percentage of 5 subjects
#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  printf("ENTER MARKS OUT OF 100\n");
  printf("Enter Subject 1 marks : ");
  scanf("%d",&sub1);
  printf("Enter Subject 2 marks : ");
  scanf("%d",&sub2);
  printf("Enter Subject 3 marks : ");
  scanf("%d",&sub3);
  printf("Enter Subject 4 marks : ");
  scanf("%d",&sub4);
  printf("Enter Subject 5 marks : ");
  scanf("%d",&sub5);
  float avg=(float)(sub1+sub2+sub3+sub4+sub5)/500;
  float per=avg*100;
  printf("Percentage is : %0.2f %%",per);
  return 0;
}

//Usage of Power Function
#include<stdio.h>
#include<math.h>
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d",&num);
  int x=pow(num,1);
  int y=pow(num,2);
  int z=pow(num,3);
  printf("%d %d %d",x,y,z);
  return 0;
}

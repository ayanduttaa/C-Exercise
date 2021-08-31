#include<stdio.h>
int main()
{
  int amo,temp;
  int arr[]={2000,500,200,100,50,20,10,5,2,1};
  printf("Enter amount : ");
  scanf("%d",&amo);
  for(int i=0;i<11;i++)
  {
    printf("Number of %d notes are %d\n",arr[i],amo/arr[i]);
  }
return 0;
}

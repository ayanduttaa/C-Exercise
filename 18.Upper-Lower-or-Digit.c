#include<stdio.h>
int main()
{
  char ch;
  printf("Enter character : ");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90)
  {
    printf("Upper Case");
  }
  else if(ch>=97 && ch<=122)
  {
    printf("Lower case");
  }
  else if(ch>=32 && ch<=47 || ch>=58 && ch<=64)
  {
    printf("Speial Character");
  }
  else if(ch>=48 && ch<=57)
  {
    printf("Number");
  }
  else
  {
    printf("Invalid Input");
  }
  return 0;
}

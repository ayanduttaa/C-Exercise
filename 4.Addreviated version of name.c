//Addreviated version of name 
#include<stdio.h>
int main()
{
  char str[10],str1[10],str2[10];
  printf("Enter first name : ");
  scanf("%s",str);
  printf("Enter middle name : ");
  scanf("%s",str1);
  printf("Enter last name : ");
  scanf("%s",str2);
  printf("%c. %c. %s",str[0],str1[0],str2);
  return 0;
}

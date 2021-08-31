///Without using User Defined Function-----------------------------------------
#include<stdio.h>
int main()
{
  int date,mon,year;
  printf("Enter Date in DD format : ");
  scanf("%d",&date);
  printf("Enter Month in MM format : ");
  scanf("%d",&mon);
  printf("Enter Year in YYYY format : ");
  scanf("%d",&year);
    if(year%4==0 || year%400==0)
     {
        if(mon>=1 && mon<=12)
        {
          if(mon==1 || mon==3 ||mon==5 || mon==7 ||mon==8 || mon==10 || mon==12)
             {
               if(date>=1 && date<=31)
               printf("Ok");
               else
               printf("Invalid date");
             }
         if(mon==4 || mon==6 ||mon==11)
             {
               if(date>=1 && date<=30)
               printf("Ok");
               else
               printf("Invalid date");
             }
         if(mon==2)
             {
               if(date>=1 && date<=29)
               printf("Ok");
               else
               printf("Invalid date");
             }
        }
        else
        printf("Invalid Month");
    }
    else
    {
      if(mon>=1 && mon<=12)
      {
        if(mon==1 || mon==3 ||mon==5 || mon==7 ||mon==8 || mon==10 || mon==12)
           {
             if(date>=1 && date<=31)
             printf("Ok");
             else
             printf("Invalid date");
           }
       if(mon==4 || mon==6 ||mon==11)
           {
             if(date>=1 && date<=30)
             printf("Ok");
             else
             printf("Invalid date");
           }
       if(mon==2)
           {
             if(date>=1 && date<=28)
             printf("Ok");
             else
             printf("Invalid date");
           }
      }
      else
      printf("Invalid Month");
    }
        return 0;
}

//Using User Defined Function------------------------------------------------
/*#include<stdio.h>
int mon,year,date;
void leap()

{
     if(mon>=1 && mon<=12)
     {
       if(mon==1 || mon==3 ||mon==5 || mon==7 ||mon==8 || mon==10 || mon==12)
          {
            if(date>=1 && date<=31)
            printf("Ok");
            else
            printf("Invalid date");
          }
      if(mon==4 || mon==6 ||mon==11)
          {
            if(date>=1 && date<=30)
            printf("Ok");
            else
            printf("Invalid date");
          }
      if(mon==2)
          {
            if(date>=1 && date<=29)
            printf("Ok");
            else
            printf("Invalid date");
          }
     }
     else
     printf("Invalid Month");
}
void normal()
{
  if(mon>=1 && mon<=12)
  {
    if(mon==1 || mon==3 ||mon==5 || mon==7 ||mon==8 || mon==10 || mon==12)
       {
         if(date>=1 && date<=31)
         printf("Ok");
         else
         printf("Invalid date");
       }
   if(mon==4 || mon==6 ||mon==11)
       {
         if(date>=1 && date<=30)
         printf("Ok");
         else
         printf("Invalid date");
       }
   if(mon==2)
       {
         if(date>=1 && date<=28)
         printf("Ok");
         else
         printf("Invalid date");
       }
  }
  else
  printf("Invalid Month");
}
int main()
{
  printf("Enter Date in DD format : ");
  scanf("%d",&date);
  printf("Enter Month in MM format : ");
  scanf("%d",&mon);
  printf("Enter Year in YYYY format : ");
  scanf("%d",&year);
  if(year%4==0 || year%400==0)
  {
    leap();
  }
  else
  normal();
  return 0;
}*/

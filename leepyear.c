#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    /* printf("Gaurav Singh Bora \n 22561004 \n MCA 1st Sem \n");*/
    printf("enter the year :  ");
    scanf("%d",&year);
    if(year%100==0)
       {
        if(year%400==0)
          printf("\nthe year %d is a leap year",year);
        else 
          printf("\nthe year %d is not a leap year",year);
       }
    else
    if(year%4==0)
       printf("\n year %d is a leap year",year);
    else
       printf("\n year %d is not a leap year",year);

 getch();
 return 0;
}
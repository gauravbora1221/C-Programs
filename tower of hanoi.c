/*
  Write a program of Tower of Hanoi to shift n plates from one peg to another using a temporary peg.
*/

#include<stdio.h>
void tower_of_hanoi(int, int, int , int, int*);

int main()
{
  int n;
  int k=0;
  printf("enter number of plates : ");
  scanf("%d",&n);
  tower_of_hanoi(n,1,2,3,&k);
  printf("\n \t The total number of steps is : %d",k);
 return 0;
}

void tower_of_hanoi(int n, int x, int y, int z, int* l)
{
   if(n==0)
     return;
   else
   {
     tower_of_hanoi(n-1,x,z,y,l);
     printf("\n \t the plate moved from rod %d to rod %d ",x,y);
     (*l)++;
     tower_of_hanoi(n-1,z,y,x,l);
   }
}
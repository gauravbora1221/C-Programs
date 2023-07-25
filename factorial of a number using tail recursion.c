/*
  Write a program to find the factorial of any number using tail recursion.
*/

#include<stdio.h>

int factorial(int,int);
int main()
{
  int n;
  printf("\n Enter the number: ");
  scanf("%d",&n);
  int result=factorial(n,1);
  printf("\n The result is : %d",result);
 return 0;
}

int factorial(int n,int r)
{
    if(n==1)
      return r;
    else
      return factorial(n-1,n*r);
}
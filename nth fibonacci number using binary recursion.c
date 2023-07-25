/*
  Write a program to compute nth Fibonacci number using binary recursion.
*/

#include<stdio.h>

int n_term(int);
int main()
{
    int n;
    printf("\n Enter the mumber : ");
    scanf("%d",&n);
    int term= n_term(n);
    printf("\n The %dth term of the fibobacci series is : %d",n,term);
  return 0;
}

int n_term(int n)
{
    if(n<=1)
      return 1;
    else
      return n_term(n-1) + n_term(n-2);      
}
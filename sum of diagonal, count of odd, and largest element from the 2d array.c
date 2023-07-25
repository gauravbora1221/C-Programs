/*
  Write a menu driven program to input a 2-D array, output it, add all its elements, add only
the diagonal elements, count the number of odd elements and find the largest among the elements stored.
*/

#include<stdio.h>
#include<stdlib.h>

int m;
void input(int arr[][m],int n);
void display(int arr[][m],int n);
void sum(int arr[][m],int n);
void sum_diagonal(int arr[][m],int n);
void count(int arr[][m],int n);
void largest(int arr[][m],int n);

int main()
{
   int ch,n;
   printf("enter the array diamension : ");
   scanf("%d%d",&n,&m);
   int arr[n][m];
   input(arr,n);

   while(ch!=-1)
   {
    printf("\n Enter your choice:");
    printf("\n 1:to display the array");
    printf("\n 2:to display the sum of the elements of the array");
    printf("\n 3:to display the sum of the diagonal element");
    printf("\n 4:to display the latgest element of the array");
    printf("\n any other to quit \n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: display(arr,n);
                break;
        case 2: sum(arr,n);
                break;
        case 3: sum_diagonal(arr,n);
                break;
        case 4: largest(arr,n);
                break;
        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }
  return 0;
}

void input(int arr[][m], int n)
{
    printf("\n Enter the elements of the array");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

}

void display(int arr[][m], int n)
{
    int i,j;
    printf("\n The array is :");
    for(i=0;i<n;i++)
    {  printf("\n");
        for(j=0;j<m;j++)
        {
            printf("  %d",arr[i][j]);
        }
    }
}

void sum(int arr[][m], int n)
{
    int sum=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
    }
   printf("\n The sum of the elements is : %d",sum);
}

void sum_diagonal(int arr[][m], int n)
{
    int sum=0,i,j;
    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j)
                  sum+=arr[i][j];
                else if((m-i-1)==j)
                   sum+=arr[i][j];
            }
        }
      printf("\n the sum of the diagonal elements is : %d",sum);
    }
    else
      printf("\n The matrix doesn't have diagonal");
}

void count(int arr[][m], int n)
{
    int k=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((arr[i][j]%2)!= 0)
              k++;
        }
    }
  printf("\n The number of odd elements is : %d",k);
}

void largest(int arr[][m], int n)
{
    int l=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]>=l)
              l=arr[i][j];
        }
    }
   printf("\n The largest element of the array is : %d",l);
}
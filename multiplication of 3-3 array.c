/*
  Write a program to multiply two 3x3 matrices.
*/

#include<stdio.h>

void input(int a[][3]);
void display(int a[][3]);
void multiply(int a[][3],int b[][3],int s[][3]);
int main()
{
   int arr1[3][3], arr2[3][3],sol[3][3];
   input(arr1);
   input(arr2);
   display(arr1);
   display(arr2);
   multiply(arr1,arr2,sol);
   printf("\n the product of the two matrix is : \n ");
   display(sol);
  return 0;
}

void input(int a[][3])
{
    int i,j;
    printf("\n Enter the elements of the 3 by 3 matrics : \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[][3])
{
    int i,j;
    printf("\n the matrix is : \n ");
    for(i=0;i<3;i++)
    {  printf("\n");
        for(j=0;j<3;j++)
        {
            printf("  %d",a[i][j]);
        }
    }
}

void multiply(int a[][3],int b[][3],int s[][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           s[i][j]=0;
            for(k=0;k<3;k++)
            {
                s[i][j]= s[i][j] + ( a[i][k] * b[k][j] );
            }
        }
    }
    
}
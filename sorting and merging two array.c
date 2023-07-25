/*
  Write a program to first sort the elements stored in two arrays in ascending order and then
merge them into a third array [without taking global variables].
*/

#include<stdio.h>
void input(int *,int);
void display(int*, int);
void sort(int *, int);
void merge(int*, int*, int, int, int*);
int main()
{
   int n,m;
   printf(" Enter the size of the two arrays : ");
   scanf("%d%d",&n,&m);
   int A[n],B[m],C[m+n];
   input(A,n);
   input(B,m);

   sort(A,n);
   sort(B,m);
   merge(A,B,n,m,C);
   
   printf("\n the two array are : \n \t");
   display(A,n);
   display(B,m);
   printf("\n the merged array is: \n \t");
   display(C,m+n);
  return 0;
}

void input(int *a,int n)
{
   int i;
   printf("\n Enter the elements of the array:\n\t");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
}
void display(int* a, int n)
{
   int i;
   printf("\n the elements of the array are:\n\t");
   for(i=0;i<n;i++)
   {
    printf("  %d",a[i]);
   }
}
void sort(int *a, int n)
{
  int i,j,min,tmp;
  for(i=0;i<n-1;i++)
  { min=a[i];
    tmp=i;
    for(j=i+1;j<n;j++)
    {
        if(min>a[j])
        {
          min=a[j];
          tmp=j;
        }
    }
   a[tmp]=a[i];
   a[i]=min;
  }
}

void merge(int* a, int* b, int n, int m, int* c)
{
  int i,j,k;
  i=j=k=0;
  while(i<n && j<m)
  {
    if(a[i]==b[j])
     {
        c[k]=c[k+1]=a[i];
        k+=2;
        i++;
        j++;
     }
    else if(a[i]<b[j])
      c[k++]=a[i++];
    else
      c[k++]=b[j++];
  }

  if(i==n)
   { 
    while(k<m+n)
      c[k++]=b[j++];
   }
  else
  {
    while(k<m+n)
      c[k++]=a[i++];
  }
}
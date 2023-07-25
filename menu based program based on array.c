/*
  Write a menu driven program having following functionalities: input an array, output, insert an element,
   delete an element, sort array in ascending order, sort an array in descending
   order [without taking global variables].
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void input(int *, int*, int);
void insert(int *, int *,int);
void delete(int *, int *,int);
void display(int *, int);
void sort_Asc(int *, int);
void sort_Desc(int *, int);

int main()
{
    int ch,n=0,t=0;
    int arr[MAX];

   do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1:to input the array");
    printf("\n 2:to display the array");
    printf("\n 3:to insert an element");
    printf("\n 4:to delete an element");
    printf("\n 5:to sort the array in ascending order");
    printf("\n 6:to sort the array in descending order");
    printf("\n any other to quit \n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the length of the array you want to insert: ");
                scanf("%d",&t);
                input(arr,&n,t);
                break;
        case 2: display(arr,n);
                break;
        case 3: printf("\n Enter the element: ");
                scanf("%d",&t);
                insert(arr,&n,t);
                break;
        case 4: printf("\n Enter the position of the element you want to delete: ");
                scanf("%d",&t);
                delete(arr,&n,t);
                break;
        case 5: sort_Asc(arr,n);
                break;
        case 6: sort_Desc(arr,n);
                break;
        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

void input(int *a, int* n,int t)
{
    if(((*n)+t)>MAX)
      printf("\n the array can have only %d elements",MAX);
    else
    {
        int i;
        printf("\n \t Enter the elements of the array: \n ");
        for(i=(*n);i<(*n+t);i++)
        {
            scanf("%d",&a[i]);
        }
      *n=i;
    }
}

void insert(int *a, int *n,int item)
{
   if((*n)+1>MAX)
     printf("\n the array can have only %d elements",MAX);
   else
    {
        a[*n]=item;
        (*n)++;
    }
}

void delete(int *a, int *n, int t)
{ int i;
  if(t<=(*n))
   {
    for(i=t-1;i<(*n)-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n Element deleted successfully");
    (*n)-=1;
   }
  else
    printf("\n   Wrong Index");
}

void display(int *a, int n)
{
  int i;
  printf("\n The array is : \n");
  for(i=0;i<n;i++)
  {
    printf("  %d",a[i]);
  }
}

void sort_Asc(int* a, int n)
{
  int i,j,min,tmp;
  for(i=0;i<n-1;i++)
  { tmp=i;
    min=a[i];
    for(j=i+1;j<n;j++)
    {
       if(min>a[j])
        { min=a[j];
          tmp=j;
        }
    }
   a[tmp]=a[i];
   a[i]=min;
  }
  printf("\n The array is sorted in ascending order");
}

void sort_Desc(int* a, int n)
{
  int i,j,max,tmp;
  for(i=0;i<n-1;i++)
  { tmp=i;
    max=a[i];
    for(j=i+1;j<n;j++)
    {
       if(max<a[j])
        { max=a[j];
          tmp=j;
        }
    }
   a[tmp]=a[i];
   a[i]=max;
  }
   printf("\n The array is sorted in descending order");
}
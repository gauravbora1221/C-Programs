/*
  Write a menu driven program of a circular queue using array having add,
   delete and display operations [without taking global variables].
*/

#include<stdio.h>
#define Max 10

void insert(int*, int*,int*,int);
void delete(int*,int*,int*);
void display(int*, int,int);

int main()
{ 
   int cqueue[Max], front=-1,rear=-1,ch,t;
  do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1: insert in circular Queue");
    printf("\n 2: delete from cirular Queue");
    printf("\n 3: DISPLAY circular QUEUE");
    printf("\n any other to quit :\n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the element you want to insert in circular queue : ");
                scanf("%d",&t);
                insert(cqueue,&front,&rear,t);
                break;

        case 2: delete(cqueue, &front, &rear);
                break;

        case 3: display(cqueue,front,rear);
                break;

        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

void insert(int* q, int* f, int* r,int item)
{
  if((*f==0 && *r==Max-1) || (*f==*r+1))
   {
     printf("\n \t The circular queue is already full");
     return;
   }
  else if(*f==-1)
  {
    (*f)++;
    (*r)++;
  }
  else if(*r==Max-1)
    *r=0;
  else
    (*r)++;
  q[*r]=item;
}

void delete(int* q,int* f,int* r)
{
    if(*f==-1)
      printf("\n \t The stack is empty");
    else
    { int tmp=q[*f];
      if(*f == *r)
        *f=*r=-1;
      else if(*f==Max-1)
        *f=0;
      else
        (*f)++;
    }
}

void display(int* q, int f, int r)
{
    if(f==-1)
     printf("\n \t The QUEUE is empty");
    else
    { 
        printf("\n \t The queue from front to rear is :\n");
        do
        {
            printf("\t %d",q[f]);
            if(f==Max-1)
              f=0;
            else
              ++f;
        }while(f!=r);
        printf("\t %d",q[r]);
    }
}
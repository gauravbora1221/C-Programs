/*
   Write a menu driven program of an output restricted queue.
*/

#include<stdio.h>
#define Max 10

void insert_front(int*, int*,int*,int);
void insert_rear(int*, int*,int*,int);
void delete(int*,int*,int*);
void display(int*, int,int);

int main()
{ 
   int cqueue[Max], front=-1,rear=-1,ch,t;
  do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1: insert from front in circular Queue");
    printf("\n 2: insert from rear in circular Queue");
    printf("\n 3: delete from cirular Queue");
    printf("\n 4: DISPLAY circular QUEUE");
    printf("\n any other to quit :\n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the element you want to insert in circular queue : ");
                scanf("%d",&t);
                insert_front(cqueue,&front,&rear,t);
                break;

        case 2: printf("\n Enter the element you want to insert in circular queue : ");
                scanf("%d",&t);
                insert_rear(cqueue,&front,&rear,t);
                break;

        case 3: delete(cqueue, &front, &rear);
                break;

        case 4: display(cqueue,front,rear);
                break;

        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

void insert_front(int* q, int* f, int* r,int item)
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
  else if(*f==0)
    *f=Max-1;
  else
    (*f)--;
  q[*f]=item;
}

void insert_rear(int* q, int* f, int* r,int item)
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
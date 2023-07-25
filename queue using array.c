/*
  Write a menu driven program of a queue using array having add,
  delete and display operations [without taking global variables].
*/

#include<stdio.h>
#define Max 10

void insert(int*, int*,int*,int);
void delete(int*,int*,int*);
void display(int*, int,int);

int main()
{ 
   int queue[Max], front=-1,rear=-1,ch,t;
  do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1: insert in Queue");
    printf("\n 2: delete from Queue");
    printf("\n 3: DISPLAY QUEUE");
    printf("\n any other to quit :\n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the element you want to insert in queue : ");
                scanf("%d",&t);
                insert(queue,&front,&rear,t);
                break;

        case 2: delete(queue, &front, &rear);
                break;

        case 3: display(queue,front,rear);
                break;

        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

void insert(int* q, int* f, int* r,int item)
{
  if(*r==Max-1)
   {
     printf("\n \t The queue is already full");
     return;
   }
  else if(*f==-1)
  {
    (*f)++;
  }
  (*r)++;
  q[*r]=item;
}

void delete(int* q,int* f,int* r)
{
    if(*f==-1)
      printf("\n \t The queue is empty");
    else
    { int tmp=q[*f];
      if(*f == *r)
        *f=*r=-1;
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
        do{
            printf("\t %d",q[f]);
            ++f;
        }while(f<=r);
    }
}
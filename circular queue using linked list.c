/*
  Write a menu driven program of a circular queue using linked list having add, delete and
display operations [without taking global variables].
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

void add(struct node**,struct node**,int);
void delete(struct node**,struct node**);
void display(struct node*,struct node*);

int main()
{ 
   struct node* front,*rear;
   int ch,t;
   front=rear=NULL;
  do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1: to add element in circular queue");
    printf("\n 2: to delete from circular queue");
    printf("\n 3: DISPLAY queue");
    printf("\n any other to quit :\n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the element you want to insert in circular queue : ");
                scanf("%d",&t);
                add(&front,&rear,t);
                break;

        case 2: delete(&front,&rear);
                break;

        case 3: display(front,rear);
                break;

        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

void add(struct node** f,struct node** r,int item)
{
    struct node* tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
   if(tmp!=NULL)
  { 
    tmp->data=item;
    tmp->link=*f;
    if(*f==NULL)
        *f=tmp;
    else
      (*r)->link=tmp;
    *r=tmp;
  }
  else
    printf("\n not able to store");
}

void delete(struct node** f, struct node** r)
{
   if(*f==NULL)
     printf("\n The circular queue is empty");
   else
   {
     struct node* tmp;
     int t=(*f)->data;
     tmp=*f;
     if(tmp->link==tmp)
       *f=*r=NULL;
     else
     { *f=(*f)->link;
       (*r)->link=*f;
     }
     free(tmp);
     printf("\n element deleted successfully");
   }
}

void display(struct node* f, struct node* r)
{
  if(f==NULL)
     printf("\n The queue is empty");
   else
   {
     struct node* tmp;
     tmp=f;
     printf("\n the elements of the queue are:\n");
     do{
        printf("\t  %d",tmp->data);
        tmp=tmp->link;
     }while(tmp!=f);
   }
}
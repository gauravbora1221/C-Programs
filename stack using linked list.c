/*
  Write a menu driven program of a stack using linked list having the push, pop and display
  operations [without taking global variables].
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* push(struct node*,int);
struct node* pop(struct node*);
void display(struct node*);

int main()
{ 
   struct node* top;
   int ch,t;
   top=NULL;
  do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1: to push in stack");
    printf("\n 2: to pop from stack");
    printf("\n 3: DISPLAY stack");
    printf("\n any other to quit :\n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the element you want to insert in stack : ");
                scanf("%d",&t);
                top=push(top,t);
                break;

        case 2: top=pop(top);
                break;

        case 3: display(top);
                break;

        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

struct node* push(struct node* top,int item)
{
    struct node* tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
   if(tmp!=NULL)
  { 
    tmp->data=item;
    if(top==NULL){
      tmp->next=NULL;
    }
    else{
      tmp->next=top;
    }
    top=tmp;
  }
  else
    printf("\n not able to store");
  return top;
}

struct node* pop(struct node* top)
{
   if(top==NULL)
     printf("\n The stack is empty");
   else
   {
     struct node* tmp;
     int t=top->data;
     tmp=top;
     top=top->next;
     free(tmp);
     printf("\n element deleted successfully");
     return top;
   }
}

void display(struct node* top)
{
  if(top==NULL)
     printf("\n The stack is empty");
   else
   {
     struct node* tmp;
     tmp=top;
     printf("\n the elements of the stack are:\n");
     while(tmp!=NULL){
        printf("\t  %d",tmp->data);
        tmp=tmp->next;
     }
   }
}
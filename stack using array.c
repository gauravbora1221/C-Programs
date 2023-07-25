/*
    Write a menu driven program of a stack 
   using array having the push, pop and display operations[without taking global variables].
*/

#include<stdio.h>
#define Max 10

void push(int*, int*,int);
void pop(int*,int*);
void display(int*, int);

int main()
{ 
   int stack[Max], top=-1,ch,t;
  do
   {
    fflush(stdin);
    printf("\n Enter your choice:");
    printf("\n 1: PUSH");
    printf("\n 2: POP");
    printf("\n 3: DISPLAY");
    printf("\n any other to quit \n \t ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("\n Enter the element you want to push in stack : ");
                scanf("%d",&t);
                push(stack,&top,t);
                break;

        case 2: pop(stack, &top);
                break;

        case 3: display(stack, top);
                break;

        default: printf("\n  GOOD BYE");
                 ch=-1;
    }
   }while(ch!=-1);
  return 0;
}

void push(int* s, int* t,int item)
{
  if(*t==Max-1)
   {
     printf("\n \t The stack is already full");
   }
  else
  {
    (*t)++;
    s[*t]=item;
  }
}

void pop(int* s,int* t)
{
    if(*t==-1)
      printf("\n \t The stack is empty");
    else
    {
        int tmp=s[*t];
        (*t)--;
    }
}

void display(int* s, int t)
{
    if(t==-1)
     printf("\n \t The stack is empty");
    else
    { 
        printf("\n \t The stack elements from top are: \n");
        do{
            printf("\t %d",s[t]);
            --t;
        }while(t!=0);
    }
}
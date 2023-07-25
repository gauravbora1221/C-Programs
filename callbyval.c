// swapping numbers by call by value
#include<stdio.h>

void swap(int ,int);
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("\n value before swap is: a=%d , b=%d",a,b);
    swap(a,b);
    printf("\n value after swap is: a=%d , b=%d",a,b);
    return 0;
}
void swap(int a,int b)
{
  int c;
  c=a;
  a=b;
  b=c;
  printf("\n value after swap is: a=%d , b=%d",a,b);
}
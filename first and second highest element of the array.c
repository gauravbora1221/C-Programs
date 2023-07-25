#include<stdio.h>
int main()
{
  int n;
  printf("Enter array size:");
  scanf("%d",&n);
  int arr[n],i;
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  int min=arr[0],min2=arr[0];
  for(i=1;i<n;i++)
   {
      if(min<=arr[i])
      {
        min2=min;
        min=arr[i];
      }
      else
      if(min2<arr[i])
       {
        min2=arr[i];
       }
   }
  printf("The first largest is:%d\n",min);
  printf("The Second highest is: %d\n",min2);
  return 0;
}
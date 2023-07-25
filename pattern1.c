#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    for(int i=0;i<n;i++)
      {
        k=1;
        printf("\n");
         for(int j=1;j<=n+n-1;j++)
         {
            if((j>=n-i)&&(j<=n+i))
             { 
               printf("%d ",k);
               ++k;
             }
            else 
              printf("  ");
         }
      }
  return 0;
}
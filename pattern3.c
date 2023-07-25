#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    for(int i=0;i<n;i++)
     {
        printf("\n");
        k=1;
        for(int j=0;j<n;j++)
         {
            if(j>=n-i)
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
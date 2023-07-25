#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {
        k=0;
        printf("\n");
        for(int j=1;j<=n+n-1;j++)
         {
           if(j>=n-i&&j<=n)
             {
                ++k;
                printf("%d ",k);
             }
            else 
            if(j>=n+1&&j<=n+i)
             {
                --k;
                printf("%d ",k);
             }
            else 
             printf("  ");
         }
     }
  return 0;
} 
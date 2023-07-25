#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {
        k=1;
        printf("\n");
        for(int j=1;j<=n+n-1;j++)
         {
           if(i==1)
           {
            if(j!=n&&(j==n-1||j==n+1))
              printf("1 ");
            else
              printf("  ");
           }
           else
           if(j>=n-i&&j<n-1)
             {
                printf("%d ",k);
                ++k;
             }
            else
            if(j==n)
             {
                if(i==0)
                  printf("1 ");
                else
                  printf("%d ",k);
             }
            else 
            if(j>=n+2&&j<=n+i&&i>1)
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
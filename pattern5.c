#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--)
     {
        printf("\n");
        for(int j=1;j<n+n;j++)
         {
            if(i%2==0)
            {
              if(j>=n-i&&j<=n+i)
                {
                    if(j%2==0)
                      printf("  ");
                    else
                      printf("* ");
                }
               else
                printf("  ");
            }
            else
             {
                if(j>=n-i&&j<=n+i)
                {
                    if(j%2==0)
                      printf("* ");
                    else
                      printf("  ");
                }
                else
                  printf("  ");
             }
         }
     }
    return 0;
}
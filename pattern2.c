#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
     {
        printf("\n");
        for(int j=1;j<=n+n-1;j++)
         {
            if((j>=n-i)&&(j<=n+i))
             {
               if(i%2==0)
                 {
                    if(j%2==0)
                      printf("* ");
                    else
                      printf("  ");
                 }
                else
                 {
                    if(j%2!=0)
                      printf("* ");
                    else
                      printf("  ");

                 }
             }
            else
             printf("  ");
         }
     }
 return 0;
}
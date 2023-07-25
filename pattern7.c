#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines you want to print: \n");
    scanf("%d",&n);
    int arr[n],k,l;
    arr[0]=1;
    arr[1]=1;
    if(n%2==0)
      k=1;
    else
      k=0;

    for(int i=0;i<n;i++)
     {
        l=0;
        printf("\n");
        if(i>1)
            {
              for(int m=i-1;m>0;m--)
               {
                 arr[i]=1;
                 arr[m]+=arr[m-1];
               }
            }
        for(int j=1;j<n+n;j++)
         { 
            if(k==1)
              {
                 if(j==n+n-1)
                  {k=0;
                  }
                 if(j>=n-i && j<=n+i)
                  {
                    if(j%2==0)
                     {
                       printf("%d ",arr[l]);
                       ++l;
                     }
                    else
                      printf("  ");
                  }
                 else
                  printf("  ");
               }
            else
            if(k==0)
              {
                if(j==n+n-1)
                  { k=1;}
                if(j>=n-i && j<=n+i)
                  {
                    if(j%2!=0)
                     {
                       printf("%d ",arr[l]);
                       ++l;
                     }
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
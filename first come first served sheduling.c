#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("enter jobs numbers:");
    scanf("%d",&n);
    int a[n];
    int job[n];
    printf("enter job arival time: \n");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    printf("enter job id: \n");
    for(i=0;i<n;i++)
      {
        scanf("%d",&job[i]);
      }
    int temp=0,index;
    for(i=0;i<n;i++)
     { temp=a[i];
       index=i;
        for(int j=i;j<n;j++)
          {
            if(a[j]<temp)
               temp=a[j];
               index=j;
          }
        a[index]=a[i];
        a[i]=temp;
        temp=job[i];
        job[i]=job[index];
        job[index]=temp;
     }
     printf("\n the sheduling will be done as: \n");
     for(i=0;i<n;i++)
        {
          printf("%d\n",job[i]);
        }
    
    return 0;
}
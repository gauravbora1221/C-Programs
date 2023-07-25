#include<stdio.h>
int main()
{
    int n,t,gcd=1,count;
    scanf("%d",&t);
    while(t!=0)
    {
       scanf("%d",&n);
       int arr[n],i;
       for(i=0;i<n;i++)
         { scanf("%d",&arr[i]);
         }
       int min=arr[0];
       for(i=1;i<n;i++)
         {
            if(min>arr[i])
               min=arr[i];
         }
        
        for(i=min;i>=1;i--)
         { count=1;
            for(int j=0;j<n;j++)
            {
                if((arr[j]%i)==0)
                   count++;
            }
           if(count==n)
             break;
         }
        if(i<=n)
          {
            if((arr[0]%arr[1])==0||(arr[1]%arr[0])==0)
              {
                if(arr[0]<=2||arr[1]<=2)
                  printf("good and buetiful");
                else
                  printf("good and not buetiful");
              }
            else
              printf("good and not buetiful");
          }
        else
        {
            if((arr[0]%arr[1])==0||(arr[1]%arr[0])==0)
              {
                if(arr[0]<=2||arr[1]<=2)
                  printf("not good and buetiful");
                else
                  printf("not good and not buetiful");
              }
            else
              printf("not good and not buetiful");
        }
          

        --t;
    }
 return 0;
}
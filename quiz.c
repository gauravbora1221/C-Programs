#include <stdio.h>

int main() {
    
    int t, i,result,count;
    scanf("%d",&t);
    while(t!=0)
    {
      i=1;
      count=0;
      int n,k;
      scanf("%d %d",&n,&k);
      while(i!=-1)
        {
            if(count<k)
             {
                 if((i%n)!=0)
                    {
                        count++;
                        result=i;
                    }
                i++;
             }
            else
              i=-1;
        }
     printf("%d\n",result);
        --t;
    }
    
    return 0;
}
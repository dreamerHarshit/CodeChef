#include<stdio.h>
//#include<math.h>
/* Include other headers as needed */

int main()
{
   int n,m,N,i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
    {
     scanf("%d",&m);
     int flag=0;
     if(m<2){
        printf("NOT PRIME\n");
        continue;
     }
     else
        for(n=2;n<=sqrt(m);n++)
         {
            if(m%n==0)
                flag=1;
          }
     if(flag==0)
     {
          printf("PRIME\n");
     }
     else
        printf("NOT PRIME\n");
   } 
    return 0;
}



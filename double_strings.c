#include<stdio.h>

int main()
{
 int T,i;
 int N;
 
 scanf("%d",&T);
 for(i=0;i<T;i++)
 {
 
   scanf("%d",&N);
   if(N%2==0)
   	{
   		printf("%d\n",N);
   	}
   else
   {
    //N=N-1;
    printf("%d\n",N-1);
   }
 }
 return 0;
}

#include<stdio.h>
int main()
{
 long long int T,N,K,s=0,i;
 long long int a[1000000];
 scanf("%lld",&T);
 while(T>0)
 {
 scanf("%lld %lld",&N,&K);
 for(i=0;i<N;i++)
 {
  scanf("%lld",&a[i]);
  s=s+a[i];
 }
 
 if(K==1)
 {
 
  if(s%2==0)
   {
   printf("odd\n");
   }
  else
  {
  	 printf("even\n");
  	}  
 }
 else
   {
    printf("even\n");
    }
    
  T--;  
 }
 
 return 0;
 
 }   

 

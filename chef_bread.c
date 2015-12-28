#include<stdio.h>
#include<math.h>
int main()
{
 long long int t,A[1000000];
 long long int n,k,i;
 long long int ba,count,breq,pack;
 scanf("%lld",&t);
 
 while(t--)
 {
  scanf("%lld%lld",&n,&k);
  count=0;
  ba=0;
  breq=0;
  pack=0;
  for(i=0;i<n;i++)
  {
   scanf("%lld",&A[i]);
  }
 
 for(i=0;i<n;i++)
 {
   if(ba<A[i])
   {
   breq=A[i]-ba;
   pack=ceil((double)breq/k);
   count=count+pack;
 // printf("%d\n",pack);
   
   ba=ba+pack*k;
   } 
   ba=ba-A[i];
   
   if(ba>0)
   {
    ba=ba-1;
   }
 }
 printf("%lld\n",count);
}
return 0;
}


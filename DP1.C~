#include<stdio.h>
 long long  memory[1000000]={0};
 
long long coin(long long n)
{ 
  if(n<12)
    return n;
    
  if(n==12)
  		return 13;
  		
  if(n<1000000)
   {
    if(memory[n]!=0)
    {
     return memory[n];
    }
     
   }		
   long long two, three, four;
    
    two=n/2;
    three=n/3;
    four=n/4;
   
  long long k= coin(two)+coin(three)+coin(four); 
  if(n<1000000)
     memory[n]=k;
 return k; 
}

int main()
{
 long long  t=0,n=0;
 
 scanf("%lld",&t);
 
 while(t--)
 {
    scanf("%lld",&n);
   printf("%lld\n",coin(n)); 
 }
return 0;
}

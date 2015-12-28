#include<stdio.h>
#include<math.h>
 int main()
 {
 long long  int a,b,c;
  
  scanf("%lld%lld",&a,&b);
  c=abs(a-b);
  if(c%10==9)
  {
   printf("%lld\n",c-1);
  }
  else
   printf("%lld\n",c+1);
   
   return 0;
 }

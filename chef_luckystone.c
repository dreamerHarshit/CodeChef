#include<stdio.h>
#include<math.h>
 
 int main()
 {
 long long int n,i,a,p,count1,count2,c,j,count,flag;
  
  scanf("%lld",&n);
  
  for(i=0;i<n;i++)
  {
   scanf("%lld",&a);
   count=0;
   count1=0;
   count2=0;
   flag=0;
   p=a;
  while(p%5==0)
   {
    p=p/5;
  //  a=4*a;
    count1++;
    flag=1;
   }
  p=a;
  
  while(p%2==0)
  {
  p=p/2;
  count2++;
  flag=1;
  }
  
  count=count1-count2;
  
   c=ceil((double) count/2);
   
   for(j=0;j<c;j++)
   {
    a=a*4;
   }
    printf("%lld\n",a);

 }
  return 0;
 }

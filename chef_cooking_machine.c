#include<stdio.h>
#include<math.h>
bool isPowerOfTwo(int n)
{
if (n&&!(n&(n-1)))
	return 1;
else 
	return 0;
}
int main()
{
 int t,a,b,count=0;
 scanf("%d",&t);
 //int c;
 while(t--)
 {
  
  scanf("%d%d",&a,&b);
  count=0;
  //c=a&(a-1);
 
 while(!isPowerOfTwo(a))
 {
 // printf("hell");
  if(a%2!=0)
  {
   a=(a-1)/2;
   printf("odd if%d\n",a);   
   count++;
  }  
  else if(a%2==0 && !isPowerOfTwo(a))
  {
  	a=a/2;
   //a=1;
  	printf("even if%d\n",a);
   count++;
  }   
 } 
  
  
 if(isPowerOfTwo(a))
 { 
  if(a<b)
  {
   while(a!=b)
   {
    a=a*2;
    count++;
   }
  }
  
 else if(a>b)
 {
   while(a!=b)
   {
    a=a/2;
    count++;
   }
 } 
}
 printf("%d\n",count); 
 
 }
return 0;
}

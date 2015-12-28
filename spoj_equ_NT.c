#include<stdio.h>
int main()
{
 long long int a,t,b,c;
 scanf("%lld",&t);
 while(t--)
 {
 
 scanf("%lld%lld%lld",&a,&b,&c);
 if((a*b)%c==0||(a*c)%b||(b*c)%a)
 {
  printf("YES\n");
 }
 
	 /*else if(b%a==0 && c%a==0)
	 {
	  printf("YES\n");
	 }*/
	 
	 else
	   printf("NO\n");
	} 
	 return 0;
}

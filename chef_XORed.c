#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int j,t,n;
 scanf("%lld",&t);
 while(t--)
 {
  j=0;
  scanf("%lld",&n);
  if(n==1)
  	printf("2\n");
		else
		{
		  j=n&(n+1);
		  if(j==0)
		   printf("%lld\n",n/2);
		  else
		   printf("-1\n");   
 }
} 
return 0;
}

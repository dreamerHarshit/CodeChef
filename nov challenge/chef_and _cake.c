#include<bits/stdc++.h>

using namespace std;
#define s(x) scanf("%d",&x);
#define s(x,y) scanf("%d%d",&x,&y);
#define p(x) printf("%d",x);
int gcd(int a,int b)
{
 if(b==0)
 {
  return a;
 }
 else
  return gcd(b,a%b);
}
int main()
{
int t;
s(x);
while(t--)
{
 int m,n,g;
 s(n,m);
 if(m==n)
 	printf("Yes\n");
 else
 {
  g=gcd(m,n);
  if(g==1)
  {
   printf("Yes\n");
  }
  else
  	printf("No %d\n",g);
 }
 	
}
 return 0;
}

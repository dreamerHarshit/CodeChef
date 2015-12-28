#include<bits/stdc++.h>

#define  s(t) scanf("%lld",&t);
#define  S(x,y) scanf("%lld%lld",&x,&y)
#define  q(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define  p(t) printf("%lld\n",t)

using namespace std;

int main()
{
long long int i,x,y,j,n1,n2,m,t;
s(t);
while(t--)
{
 q(n1,n2,m);
 j=m*(m+1)/2;
 
 x=min(j,n1);
 y=min(x,n2);
 
 
 p(n1+n2-2*y); 
}
return 0;
}

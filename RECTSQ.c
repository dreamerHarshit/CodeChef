#include<bits/stdc++.h>

#define  s(t) scanf("%d",&t);
#define  S(x,y) scanf("%d%d",&x,&y)
#define  q(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define  p(t) printf("%d\n",t)

using namespace std;

int main()
{
 int t;
 s(t);
 while(t--)
 {
 int m,n,y,x,d;
 S(n,m);
 x=__gcd(n,m);
 y=(m*n)/(x*x);
 p(y);
 }  
return 0;
}

#include<stdio.h>
#include"bits/stdc++.h"
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
  int t,i,m,n;
  int l,r,x,j,a,b,s;
	
	scanf("%d%d",&n,&m);
	
	vector<set<int> > vset(n+1);
	
	for(i=0;i<m;i++)
	{
	 scanf("%lld",&a);
	 if(a==0)
	 {
	  scanf("%lld%lld%lld",&l,&r,&x);
	  for(j=l;j<=r;j++)
	   vset[j].insert(x);
	 }
	 else
	  {
	   scanf("%lld",&b);
	   s=vset[b].size();
	   printf("%lld\n",s);
	  }
	}
return 0;
}

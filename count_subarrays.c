#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 long long int i,j,t,n,count;
 scanf("%lld",&t);
 while(t--)
 {
  long long int k=0,m,p;
  scanf("%lld",&n);
  vector<int> v;
  count=n;
  for(i=0;i<n;i++)
  {
  	scanf("%lld",&p);
  	v.push_back(p);
  }	
	//j=1;
	k=0;
	for(i=1;i<n;i++)
	{
	 if(v[i-1]<=v[i])
	 {
	  if(k>0)
	  {
	   count=count+(i-k);
	  } 
	 else
	 	count=count+i;
	}
	else
	 k=i;
	} 
	printf("%lld\n",count);
}
 return 0;
} 

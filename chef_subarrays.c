#include<bits/stdc++.h>
#define  s(t) scanf("%d",&t)
using namespace std;
int main()
{
	int t;
	//scanf("%d",&t);
	s(t);
	while(t--)
	{
		vector<int> a;
		long long int n,i,j=0,p,s,y,count=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
		 scanf("%lld",&y);
		 a.push_back(y);
		}
		for(i=0;i<n;i++)
		{
		 p=a[i];
		 s=a[i];
		// cout<<"i="<<i<<"\n";
		 for(j=i+1;j<n;j++)
		 {
		  //cout<<"hello/n";
		 	p*=a[j];
		 	s+=a[j];
		 	//cout<<"p,s="<<p<<s<<"\n";
		 	if(s==p)
		 		count++;
		 }
		}
		//cout<<"count="<<count<<"\n";
		printf("%lld\n",count+n);
	}
return 0;
}

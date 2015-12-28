#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,i,n;
	vector<int> v;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	 scanf("%d",&n);
	 v.push_back(n);
	}
	sort(v.begin(),v.end());
 for(i=0;i<v.size();i++)
 {
  printf("%d\n",v[i]);
 }	 

return 0;
}

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
#define tr(container,it)   for(typeof(container.begin()) it = (container).begin();it!=(container).end();it++)
//#define tr(container, it) for(typeof(container.begin()) it = (container).begin();it!=(container).end();it++)
using namespace std;
int main()
{
 string s;
 int i,n;
	
	map<string,int> M;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		//scanf("%s",s);
	  cin>>s;
	  M[s]++;	
	}

 tr(M,it)
 {
 // printf("%s,%d",it->first,it->second);
 cout<<it->first<<" "<<it->second;
 cout<<"\n";
 }
return 0;
}


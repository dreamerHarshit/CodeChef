#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
 int n,p,i,t,m,max=0;
	scanf("%d",&t);
	while(t--)
	{
	  int v1[10001];
	  int v2[10001]={0};
	 //p=0;
	// max=0;
	 //memset(v2,0,sizeof(v2));
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
		 scanf("%d",&v1[i]);
		 v2[v1[i]]++;
		}
		max=v2[0];
	for(i=1;i<=10001;i++)
	{
	 if(v2[i]>max)
	 {
	 		max=v2[i];
	  	p=i;
	 }	
	}
	printf("%d %d\n",p,max);
	}
return 0;
}

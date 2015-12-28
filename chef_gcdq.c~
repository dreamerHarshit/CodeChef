#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int gcd(int x, int y)
{
    int r;

    if (x <= 0 || y <= 0)
        return(0);

    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return(y);
}

int main()
{
	int t,i,n,q,p,q1,g,q2;
	vector<int> v;
	scanf("%d",&t);
	while(t--)
	{
	 g=v[0];
	 scanf("%d%d",&n,&q);
	 for(i=0;i<n;i++)
	 {
	  scanf("%d",&p);
	  v.push_back(p);
	 }
	 for(i=0;i<q;i++)
	 {
	  scanf("%d%d",&q1,&q2);
	  v.erase(v.begin()+q1-1,v.begin()+q2-1);
	  g=gcd(g,v[i]);
	  printf("%d\n",g);
 } 
}
return 0;
}

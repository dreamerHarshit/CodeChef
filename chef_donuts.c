#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 long long int i,n,m,j,t,p;
 scanf("%lld",&t);
 while(t--)
 {
  int count=0,flag=0;
  vector<int> v;
  v.clear();
  scanf("%lld%lld",&n,&m);
  for(i=0;i<m;i++)
  {
   scanf("%lld",&p);
   v.push_back(p);
  }
  sort(v.begin(),v.end());
  for(i=0;i<m;i++)
  { 
   count=count+v[i]+1;
    if(count>=m)
   {
    printf("%lld\n",m-i-1);
    break;
   }
  /* else
   {
		printf("%lld\n",m-1);
    break;
    }*/
  }
 }
 return 0;
}

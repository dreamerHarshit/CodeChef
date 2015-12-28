#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
 long long int n,t,i;
 scanf("%lld",&t);
vector<int> v;
vector<int>::iterator it;
it=v.begin();
 while(t--)
 {
  scanf("%lld",&n);
  v.insert(it,1);
  it++;
  v.insert(it,2);
  it++;
  v.insert(it,3);
  if(n<=3)
   printf("%lld\n",n);
 else
{
  i=3;
  while(v[i-1]<=n)
  {
   v[i]=v[i-1]+v[i-2];
   i++;
  }
 printf("%lld\n",i-1);
}
}  
return 0;
}

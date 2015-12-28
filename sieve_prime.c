#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> v(0);
    long long m,n,t,i,j;
    scanf("%lld",&t);
    while(t--)
    {
    for (long long int i = n; i <=m; i++)
    {
        for (long long int j = i * i; j <=m; j+=i)
        {
            v.insert(v.begin()+j-1,1);
        }
    }
    for (long long int i =n; i <=m; i++)
    {
        if (v[i - 1] == 0)
           printf("%lld\n",i);
    }
   }
  return 0;  
}

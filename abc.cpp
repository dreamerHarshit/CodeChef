#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
 int count,t,i;
 string s,j;
 cin>>t;
 while(t--)
 {
  cin>>j;
  cin>>s;
  set<char> p;//(j.begin(),j.end());
  count=0;
  //p.clear();
  for(i=0;i<j.length();i++)
 {
  p.insert(j[i]);
 }
 count=0;  
  for(i=0;i<s.length();i++)
		{
		 if(p.count(s[i]))
		 {
		  count++;
		 }
		}
		cout<<count<<"\n";
 }
 return 0;
}

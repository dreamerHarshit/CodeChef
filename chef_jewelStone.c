#include<stdio.h>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 int i,p,count,t;
 string j,s;
 scanf("%d",&t);
 while(t--)
 {
  count=0;
  //p=0;
  //i=0;
  cin>>j;
  cin>>s;
//cout<< s <<"length" << s.length();
  for(i=0;i<j.length();i++)
  {
   for(p=0;p<s.length();p++)
   {
    if(j[i]==s[p])
    {
     count++;
    }
   }
  }
 printf("%d\n",count);
}
return 0;
}

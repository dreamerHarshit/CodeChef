#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int t,i=0,flag=0;
string s1,s2;
scanf("%d",&t);
while(t--)
{
 s1.clear();
 s2.clear();
 cin>>s1;
 cin>>s2;
 flag=0;
 i=0;
 while(i<s1.length())
 {
	 if(s1[i]=='?'||s2[i]=='?')
	 {
	  flag=1;
	  i++;
	 }
	 else
	 {
	  if(s1[i]==s2[i])
	  {
	   flag=1;
	   i++;
	  }
	  else
	  {
	    printf("No\n");
	    flag=0;
	  	 break;
	  }	
	 }
 }	
 if(flag==1)
 {
  printf("Yes\n");
 }
 //else if()
}
return 0;
}

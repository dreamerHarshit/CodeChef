#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
 int t,m,n,count,i,flag;
 string s1,s2,s;
 scanf("%d",&t);
 while(t--)
 {
  cin>>s1>>s2;
  flag=0;
 for(i=0;i<n;i++)
 { 
  if(s1[i]=='.' || s2[i]=='.')
   flag=1;
 
  else
   flag=0;
  
  if(flag==0) 
    break;
 }
 if(flag==1)
 {
 	printf("Yes\n");
 }
 else
  	printf("No\n");  
 }
return 0;
}

#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using  namespace std;
int main()
{
 string s;
 int t,i,flag;
 scanf("%d",&t);
 while(t--)
 {
  flag=1;
  cin>>s;
  
  for(i=0;i+2<s.size();i++)
  {
   if(s[i]!=s[i+2])
   {
     flag=0;
     //printf("NO");
     break;
   }
   else
   {
    flag=1;
   } 
  }
  if(s[0]==s[1])
  	flag=0;

  if(flag==1)
  	printf("YES\n");
  else
   printf("NO\n");	
 } 
return 0;
}


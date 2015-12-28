#include<bits/stdc++.h>

using namespace std;

int main()
{
 int i,j,n,t;
 scanf("%d",&t);
 while(t--)
 {
  string s;
  cin>>s;
  int count[110]={0},flag=0;
  for(i=0;i<s.size();i++)
 {
  
  if(s[i]=='L')
      count[0]++;
  else if(s[i]=='T')
      count[1]++;
  else if(s[i]=='I')
      count[2]++; 
  else if(s[i]=='M')
      count[3]++;
  else if(s[i]=='E')
      count[4]++; 
 }
if(i==9 && count[0]==2&&count[1]==2&&count[2]==2&&count[3]==2&&count[4]==1)
{
 printf("YES\n");
}

else if(i>9 && count[0]>=2&&count[1]>=2&&count[2]>=2&&count[3]>=2&&count[4]>=2)
{
 printf("YES\n");
}

else
 printf("NO\n");
}
return 0;
}

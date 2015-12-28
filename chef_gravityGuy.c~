#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
string s1,s2,s;
int t,count,i,a,b,flag;

scanf("%d",&t);

while(t--)
{
 s.clear();
 s1.clear();
 s2.clear();
 cin>>s1>>s2;
 count=0;
 flag=0;
 a=0;
 b=0;
 i=0;
 while(i<s1.length())
 {
  if(s1[i]=='#'&&s2[i]=='#')
  {
   flag=0;
   break;
  }
  
  else if(s1[i]=='.'&&s2[i]=='.')
  { 
  	i++;
  	flag=1;
  }
  
  else if(s1[i]=='.'&&s2[i]=='#')
  {
   if(a==1)
   {
    i++;
   }
   else if(b==1)
   {
    count++;
    i++;
   }
   b=0;
   a=1;
   flag=1;
  }
  
  else if(s2[i]=='.'&&s1[i]=='#')
  {
   if(b==1)
   {
    i++;
   }
   else if(a==1)
   {
    count++;
    i++;
   }
   a=0;
   b=1;
   flag=1;
  } 
 }
 
 if(flag==1)
 {
  printf("Yes\n");
  printf("%d\n",count);
 }
 else
 	printf("No\n");
 
} 
return 0; 
}

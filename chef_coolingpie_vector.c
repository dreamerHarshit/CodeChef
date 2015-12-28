#include<stdio.h>
#include<bits/stdc++.h>
//#include<vector>
#include<algorithm>
//#define tr(container,it) for(vector<int>::iterator it=v1.begin;it!=v1.end;it++)
using namespace std;
 
int main()
{
 int i,j,m,n,t,count=0;
// int pie[100],rk[100];
 
 vector<int> v1;
 vector<int> v2;
 
 scanf("%d",&t);
 
 while(t--)
 {
  v1.clear();
  v2.clear();
  count=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
   scanf("%d",&m);
   v1.push_back(m);
  }
  
  for(i=0;i<n;i++)
  {
   scanf("%d",&j);
   v2.push_back(j);
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  
  for(i=0;i<n;i++)
  {
   //printf("i loop\n");
   for(j=0;j<n;j++)
   {
    //printf("j loop\n");
    if(v1[i]<=v2[j])
    {
     count++;
     v2[j]=0;
      break;
    }
   }
  }
  printf("%d\n",count);
} 
return 0;
} 

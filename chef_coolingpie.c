#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
 int i,j,m,n,t,count;
 
 vector<int> v1;
 vector<int> v2;
 
 scanf("%d",&t);
 
 while(t--)
 {
  v1.clear();
  v2.clear();
  scanf("%d",&n);
  count=0;
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
  
  j=0;
  i=0;
  while(i<n&&j<n)
  {
     if(v1[i]<=v2[j])
     {
      count++;
      j++;
      i++;
    }
    else
    	 j++;
  }
  printf("%d\n",count);
} 
return 0;
}

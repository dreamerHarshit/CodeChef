#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int i,j,t;
 scanf("%d",&t);

 while(t--)
 {
  int n=0,k=0,a[100]={0};
  string s[100];
  string s1[51];
  int l,m=0;
  scanf("%d%d",&n,&k);
  
  //printf("%d,%d\n",n,k);
  
  for(i=0;i<n;i++)
  {
   cin>>s[i];
  }
  
  for(i=0;i<k;i++)
  {
   
   scanf("%d",&l);
   
   for(m=0;m<l;m++)
   {
   	
   	cin>>s1[i];
   	
   	for(j=0;j<n;j++)
   	{
   	
   		if(s[j]==s1[i])
   			a[j]=1;
   	
   	}		 
   }
  }
   //printf("%d\n",n); 
   for(i=0;i<n;i++)
   {
   
   	if(a[i]==1)
   		printf("YES\t");
    else
      printf("NO\t");
   }
  printf("\n");  
  }
return 0;
}

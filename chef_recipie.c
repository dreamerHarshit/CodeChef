#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
 if(b==0)
  return a;
 else
 	gcd(b,a%b); 
}

int main()
{
 int i,j,n,t;
 scanf("%d",&t);
 while(t--)
 {
  int a[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 j=a[0];
 for(i=1;i<n;i++)
 {
  j=gcd(j,a[i]);
 } 
 for(i=0;i<n;i++)
  { 
 		printf("%d\t",a[i]/j);    
  }
 }
 return 0;
}

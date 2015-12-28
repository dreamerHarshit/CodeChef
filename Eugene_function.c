#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int a,i,d,l,r,x=0;
  scanf("%d%d%d%d",&a,&d,&l,&r);
  for(i=a;i<r;i+d)
  {
   if(i>10)
   {
    cout<<"i\n"<<i;
   int m=0,n=i;
   if(i>=l)
   {
    while(n>10)
    {
     cout<<"n\n"<<n;
     m=m+n%10;
     n=n/10;
    }
   }
    x=x+i+m;
  }
  //printf("%d\n",x);
 } 
} 
	
 return 0;
}
